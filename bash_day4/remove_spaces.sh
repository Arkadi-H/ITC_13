#!/bin/bash

sed 's/ \{2,\}/ /g' | sed -i 's/^ \{,\}//g'  remove_spaces.txt



