#!/bin/bash


FILE=remove_lines.txt
if [ -f "$FILE" ]; then
    echo "$(cat $FILE | sed '/Avagyan/d')"
    
fi
