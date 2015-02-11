#Write a shell script to calculate the sum of Given N numbers.
clear
echo Enter first number
read n1
n=`expr $n1 \+ 1`
m=`expr $n1 \* $n`

n=`expr $m \/ 2`

echo The Sum of $n1 Numbers is $n.
