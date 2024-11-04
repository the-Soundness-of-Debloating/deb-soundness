#!/bin/bash
dir=$1
home_folder=$(pwd)
deb_tool=${dir%%/*}
prog_name=${input##*/}
echo $deb_tool   $prog_name

cd $dir
main_error_patterns=(
  "stack-buffer-overflow" 
  "global-buffer-overflow" 
  "READ memory access" 
  "heap-buffer-overflow"
  "WRITE memory access" 
  "use-of-uninitialized-value" 
  "Direct leak" 
  "stack-overflow" 
  "CHECK failed: sanitizer_allocator_secondary.h"
  "allocation-size-too-big"
  "heap-use-after-free"
  "requested allocation size .* exceeds maximum supported size"
  "attempting free on address which was not malloc\\(\\)-ed"
  "negative-size-param"
  "strcpy-param-overlap"
  "memcpy-param-overlap"
)
detailed_error_patterns=(
  "address points to the zero page"
  "dereference of a high value address"
  "pc points to the zero page"
  "nested bug in the same thread"
)
runtime_error_patterns=(
    "index .* out of bounds" 
    "load of value .* not a valid value" 
    "null pointer passed as argument"
    "member access within misaligned address"
    "applying non-zero offset .* to null pointer"
    "signed integer overflow"
    "member access within null pointer"
    "store to misaligned address"
    "store to null pointer"
    "left shift of 1 by 31 places cannot be represented"
    "negation of .* cannot be represented"
    "execution reached an unreachable program point"
    "load of null pointer"
)
function extract_runtime_error () {
  error_line=$1
  ERROR_DETAIL=""
  for pattern in "${runtime_error_patterns[@]}"; do
    if [[ $error_line =~ $pattern ]]; then
      ERROR_DETAIL+="$pattern,"
    fi
  done
}
function error_extraction () {
  error_msg_file=$1
  cat $error_msg_file
  # read stop
  error_found=0
  MAIN_ERROR=""
  ERROR_DETAIL=""
  if grep -q $stacktrace $error_msg_file && grep -q "runtime error" $error_msg_file # runtime error
  then 
    error_found=1
    MAIN_ERROR="runtime error"
    extract_runtime_error "`grep "$stacktrace" $error_msg_file`"
  else
    for pattern in "${main_error_patterns[@]}"; do
      if grep -q -E "$pattern" $error_msg_file
      then
        MAIN_ERROR+="$pattern,"
        error_found=1
      fi
    done
    for pattern in "${detailed_error_patterns[@]}"; do
      if grep -q "$pattern" $error_msg_file
      then
        ERROR_DETAIL+="$pattern,"
        error_found=1
      fi
    done
  fi
  return $error_found
}


function analyse_fix () {
  fixes_dir=../../../fixes
  mkdir $fixes_dir
  target=../*.reduced.c
  echo $crash_dir
  base_file=$crash_dir/fix_delta/*.reduced.base.c
  if [ -f $base_file ]
  then 
    target=$base_file
  fi

  sdiff -l $target $crash_dir/fix_delta/*.reduced.fixed.c | cat -n | grep -v -e '($' > temp_fix
  fix_total=`ls -l $fixes_dir | grep "^-" | wc -l`
  for ((fix_id=0; fix_id < ${fix_total}; fix_id++))
  do
    diff -y --suppress-common-lines $fixes_dir/fix_$fix_id $temp_fix
    read same
    if [ $same == 'y' ]
    then 
      fix_num=$fix_id
    else 
      cp temp_fix $fixes_dir/fix_$fix_total
      fix_num=$fix_total
    fi
  done
  read stop
  clear -x
}

function generate_deb_lines () {
  line_total=`cat ./*.reduced.c | wc -l`
  line_reserved='['
  line_reserved_count=0
  for (( i=1; i <= $line_total; i++ ))
  do
    line=`gsed -n ${i}p *.reduced.c`
    if [[ ! "$line" =~ ^[[:space:]]*$ ]]
    then 
      line_reserved+="$i,"
      ((line_reserved_count++))
    fi
  done
  line_reserved+=']'
  echo "reduced.c lines total: " $line_reserved_count > deb_lines
  echo $line_reserved >> deb_lines
}

function extract_crash_line_info(){
  if [ ! -f analysis ]
  then 
    echo File analysis does not exist.
    exit 1
  fi
  echo "[" > crash_info
  total=`cat analysis | wc -l`
  for (( line=1; line <= $total; line++ ))
  do
    if echo $line | grep -q "NOSAN";
    then 
      continue
    else
      crash_loc=`sed -n "${line}p" analysis | awk -F "\t" '{print $1}'`
      vul_type=`sed -n "${line}p" analysis | awk -F "\t" '{print $5}'`
      echo $crash_loc, $vul_type
      echo "{ crash_loc: $crash_loc, vul_type: \"$vul_type\", deb_tool: \"$deb_tool\" }, ">>crash_info
    fi
  done 
  echo "]" >> crash_info
}

function extract_plot_data () {
  if [ ! -f deb_lines ]
  then 
    generate_deb_lines
  fi
  extract_crash_line_info
}

function cp_source_file () {
  # on mac
  cp ~/Workspace/fuzzing-deb-with-sanitizers/$dir/*.origin.c .
  cp ~/Workspace/fuzzing-deb-with-sanitizers/$dir/*.reduced.c .
}
function main(){
  rm analysis crash_info

  cp_source_file

  cd crashed_inputs
  total=`ls -d */ | wc -l`
  for ((i=0; i<$total; i++))
  do
    crash_dir=crash_$i:*

    echo $crash_dir

    stacktrace=$(echo $crash_dir | cut -d: -f2-)
    
    crash_loc=`echo $crash_dir |  awk -F'[:;]' '{print $2}'`
    
    AFL_detected=0
    radamsa_detected=0
    symcc_detected=0
    if ls $crash_dir | grep -q afl*; 
    then 
      AFL_detected=1
    fi
    if ls $crash_dir | grep -q symcc*; 
    then 
      symcc_detected=1
    fi
    if ls $crash_dir | grep -q -E "input\d+_*";
    then 
      radamsa_detected=1
    fi

    fuzzers=()
    if [ $AFL_detected -eq 1 ]
    then
      fuzzers+=("AFL++")
    fi
    if [ $radamsa_detected -eq 1 ]
    then
      fuzzers+=("radamsa")
    fi
    if [ $symcc_detected -eq 1 ]
    then
      fuzzers+=("symcc")
    fi
    
    fuzzers=`echo ${fuzzers[@]} | tr ' ' ','`

    sans=""
    sans=`cat crash_$i:*/sanitizer_info | tr '\n' ',' | tr '[:lower:]' '[:upper:]'`
    # read stop

    MAIN_ERROR=""
    ERROR_DETAIL=""
    if [ $sans != "NOSAN," ]
    then
      error_extraction crash_$i:*/error_msg
      if [ $? -ne 1 ]
      then 
        echo "No Error Found."
        read stop
      fi
    fi
    # read stop 

    # analyse_fix

    echo -e "$crash_loc\t$stacktrace\t$fuzzers\t$sans\t$MAIN_ERROR\t$ERROR_DETAIL\t$fix_num" >> analysis
    echo -e "$crash_loc\t$stacktrace\t$fuzzers\t$sans\t$MAIN_ERROR\t$ERROR_DETAIL\t$fix_num"
    # read stop
    clear -x
  done
  mv analysis ..
  cd ..

  extract_plot_data

}

main

cd $home_folder