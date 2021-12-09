#!/bin/bash

sed -i "s/^ *//;s/ *$//;s/ \{1,\}/ /g" test.txt 
