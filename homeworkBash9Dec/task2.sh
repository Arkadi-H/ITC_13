#!/bin/bash
echo enter proccess name
read proccessName
num_children= $children | wc -w


if [$num_children -gt 2]
then
	pkill -U <$processName>


fi
