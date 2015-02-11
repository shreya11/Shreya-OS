#Write a shell script to check whether the scanned string is found in a file or not. Display appropriate message.
#!/bin/bash
echo "enter the pattern"
read p
echo "file name: "
read f
if grep  $p $f
then
echo pattern found
else
echo pattern not found
fi

