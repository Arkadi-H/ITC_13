#!/bin/bash

line=5;
for((i=1; i<=line; i++))
do
	for((a=i; a<=line; a++))
	do
	echo -n " ";
	done

	for((p=1; p<=i; p++))
	do
	echo -n "*";
	done
	
	for((d=1; d<i; d++))
	do
	echo -n "*";
	done
echo;
done
