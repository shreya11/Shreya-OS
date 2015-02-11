clear
choice=1
while [ $choice -ne 0 ]
do
	echo Enter the Number Between 0-50.
	read n1	
	if [ $n1 -gt 50 ] 
	then
	    echo Wrong Number Entered
	elif [ $n1 -lt 0 ]
	then
		echo Wrong Number Entered
	else 
		n=`expr $n1 \* $n1`
		echo The Square of the Given Number is $n.
	fi

	echo "Do You want to continue?(1/0)" 
	read choice
done
