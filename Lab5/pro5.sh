read -p "enter the file name: " first
read -p "enter the file name: " second

if [ -e $first ]
	then
	if [ -e $second ]
	then 
		cat $first>>$second
		
	else
		cat $first>>$second
	fi
fi
