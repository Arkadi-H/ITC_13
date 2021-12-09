#!/bin/bash

let i=0
let j=0
z=5
while [ $i -lt $z ]
do
echo $j
echo $i
    while [ $j -le $i ]
        do
        echo -n \*
         j=$(($j + 1))
       done
 echo " "
 i=$(($i + 1))
done
