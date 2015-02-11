#!/bin/bash
file=a.txt
lines=0
while IFS= read -rN1 char; do
if [[ "$char" == $'\n' ]]; then
    ((++lines))
fi
done < "$file"
lines=`expr $lines \- 1`
echo $lines

