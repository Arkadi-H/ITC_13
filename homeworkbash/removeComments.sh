#!\bin\bash

echo "enter file name"

read name

grep -v ^\# $name | grep  .


