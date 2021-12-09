#!/bin/bash

echo How many columns should a right triangle consist of? write number
read num
for ((i=0;i<num;i++))
do
    for((j=0;j<=i;j++))
    do
    echo -n \*
    done
    echo " "
    
done
