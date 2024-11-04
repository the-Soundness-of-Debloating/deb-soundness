cd ..

> scripts_data/table1/ave_issue_reduction
> scripts_data/table2/chisel_issue_reduction
> scripts_data/table2/cov_issue_reduction
> scripts_data/table2/covf_issue_reduction
> scripts_data/table2/cova_issue_reduction
> scripts_data/table2/blade_issue_reduction


deb_tools=("chisel" "blade" "cov" "cova" "covf") 
for deb_tool in "${deb_tools[@]}"; do  
    ave_reduction=0
    ave_issue=0

    cd "$deb_tool" || { echo "err in dir $deb_tool "; exit 1; }


    for dir in */; do
        cd "$dir" || { echo "err in dir $dir "; cd ..; continue; }
        
        if [ -f analysis ]; then
            issue_line=$(wc -l < analysis)
            ave_issue=$((ave_issue + issue_line))
        else
            issue_line=0
        fi
        
 
        reduced_line=$(sed -n '1p' deb_lines | awk '{print $4}')
        origin_line=$(wc -l < *.reduced.c)


        reduced_line=$((origin_line - reduced_line))


        if [ "$origin_line" -ne 0 ]; then
            reduction=$(echo "scale=4; $reduced_line / $origin_line" | bc)

            if [[ ! $dir == *"input"* ]]; then
                ave_reduction=$(echo "scale=4; $ave_reduction + $reduction" | bc)  
            fi 
        else
            reduction=0
            echo "origin_line is 0"
            echo "$deb_tool $dir"
        fi

        echo "$deb_tool $dir issue: $issue_line, reduction: $(echo "$reduction * 100" | bc)%" >> "../../scripts_data/table2/${deb_tool}_issue_reduction"
        cd ..
    done

    ave_issue=$(echo "scale=4; $ave_issue / 16" | bc)  
    ave_reduction=$(echo "scale=4; $ave_reduction / 10 * 100" | bc)  

    echo "tool: $deb_tool ave_issue: $ave_issue, ave_reduction: $ave_reduction%" >> ../scripts_data/table1/ave_issue_reduction  
    cd ..
done
