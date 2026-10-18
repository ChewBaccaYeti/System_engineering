#!/usr/bin/env bash

tree > UNIX/structure/tree.txt
ls -lai > UNIX/structure/ls.txt

awk '
    /<!-- TREE-START -->/ {
        print
        while ((getline line < "UNIX/structure/tree.txt") > 0) print line
        close ("UNIX/structure/tree.txt")
        skip = 1
        next
    }
    /<!-- TREE-END -->/ {
        skip = 0
    }
    !skip {print} 
' README.md > README.tmp && mv README.tmp README.md
