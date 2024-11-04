#!/bin/sh

deb_tools=("chisel" "cov" "covf" "cova" "blade")

missing_analysis_file="missing_analysis.txt"
missing_crash_info_file="missing_crash_info.txt"
missing_deb_lines_file="missing_deb_lines.txt"

> $missing_analysis_file
> $missing_crash_info_file
> $missing_deb_lines_file

cd ..

for deb_tool in ${deb_tools[@]}
do  
    cd $deb_tool
    for dir in */;
    do
        if [ ! -f "${dir}analysis" ] ; then
            echo "dir need analysis: $deb_tool/$dir" >> "../scripts/$missing_analysis_file"
        fi
        if [ ! -f "${dir}crash_info" ] ; then
            echo "dir need crash_info的: $deb_tool/$dir" >> "../scripts/$missing_crash_info_file"
        fi
        if [ ! -f "${dir}deb_lines" ]; then
            echo "dir need deb_lines: $deb_tool/$dir" >> "../scripts/$missing_deb_lines_file"
        fi
    done
    cd ..
done

echo "output $missing_analysis_file, $missing_crash_info_file, $missing_deb_lines_file"
