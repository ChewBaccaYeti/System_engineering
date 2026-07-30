#!/usr/bin/env bash

quadTab() {
    local output_file="multiplication_table_sh.txt"
    
    # Clear or create the file
    > "$output_file"
    
    # Print header row
    printf "%-4s" "" >> "$output_file"
    for ((j=1; j<=10; j++)); do
        printf "%-4d" "$j" >> "$output_file"
    done
    printf "\n" >> "$output_file"
    
    # Print separator
    printf "----\n" >> "$output_file"

    # Generate multiplication table
    for ((int=1; int<=10; int++)); do
        printf "%-4d" "$int" >> "$output_file"
        for ((inc=1; inc<=10; inc++)); do
            local val=$((int * inc))
            printf "%-4d" "$val" >> "$output_file"
        done
        printf "\n" >> "$output_file"
    done
}

quadTab