#!/bin/sh

cd ..

deb_tools=("chisel" "cov" "covf" "cova" "blade") 
for deb_tool in ${deb_tools[@]}
do  
    cd $deb_tool || { echo "dir no exist"; exit 1; }
    for dir in */; do
        # need apt install ctags
        echo $dir
        cd $dir
        ctags -x --c-kinds=f *c.origin.c > function_lines

        cd ..
    done
    cd ..
done