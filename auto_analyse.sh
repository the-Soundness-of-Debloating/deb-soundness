deb_tools=("chisel-san" "chisel-und" "chisel-full" "blade-san" "blade-und" "blade-full") 

for deb_tool in ${deb_tools[@]}
do  
  for dir in `ls -d $deb_tool/*`
  do
    if [ ! -f $dir/analysis ]
    then 
      echo $deb_tool 
      echo $dir
      bash -x ./analyse.sh $dir
    fi
  done
done
