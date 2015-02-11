echo "Enter the Number:"
read n
a=0
i=2
number=`expr $n / 2`
while [ "$i" -le "$number" ]
do 
	
	b=`expr $n % $i`
	
	if [ "$b" -eq 0 ]
	then
		echo "It is not prime"
		a=1
	break		
	fi
	i=`expr $i + 1`
done 
if [ $a -eq 0 ]
then
echo "It is prime"
fi
