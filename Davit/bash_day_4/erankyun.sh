#!/bin/bash

echo How many columns should a triangle consist of? write number?
read num
for((m=1;m<=num;m++))
do
    for((a=m;a<=num;a++))
    do
      echo -ne " ";
    done

    for((n=1; n<=m; n++))
    do
      echo -ne "*";
    done
 
    for((i=1; i<m; i++))
    do
      echo -ne "*";
    done
    echo;
done

