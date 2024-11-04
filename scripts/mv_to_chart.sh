#!/bin/sh

arg=$1

TARGET_DIR="/home/dell/username/deb-rob/deb-vul-distribution-chart/$arg"

cd ..

deb_tools=("chisel" "cov" "covf" "cova" "blade") 
for deb_tool in ${deb_tools[@]}
do  
    cd $deb_tool || { echo "dir not exist"; exit 1; }
    for dir in */; do
        CRASH_INFO_FILE="$arg"
        echo $dir
        cd $dir
        if [ -f "$CRASH_INFO_FILE" ]; then
            NEW_NAME=$(echo "$dir" | tr '/' '_')$arg
            cp "$CRASH_INFO_FILE" "$TARGET_DIR/$deb_tool/$NEW_NAME"
            echo "copy: $CRASH_INFO_FILE -> $TARGET_DIR/$NEW_NAME"
        else
            echo "file not exist: $CRASH_INFO_FILE"
        fi
        cd ..
    done
    cd ..
done