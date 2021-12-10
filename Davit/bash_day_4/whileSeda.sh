#!/bin/bash

i=0
z=5
while [ $i -lt $z ]
do
j=0
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
