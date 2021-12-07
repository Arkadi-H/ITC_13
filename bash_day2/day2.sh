#! /bin/bash

ip=$(hostname -I)

echo Addreses
for i in "${ip[@]}";
do
	echo  "$i"
done
