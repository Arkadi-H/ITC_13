#!/bin/bash


echo enter file name

read fileName

cat $fileName | tr -d " \t\r" 
