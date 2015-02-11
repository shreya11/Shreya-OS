 #Write a shell script that greets the user by saying Good Morning, Good Afternoon,and Good Evening according to the system time.

d=`date|cut -d " " -f 4|cut -d ":" -f 1`
if [ $d -gt 00 -a $d -lt 12 ]
then
echo Good Morning
elif [ $d -gt 12 -a $d -lt 16 ]
then
echo Good Afternoon
elif [ $d -gt 16 -a $d -lt 20 ]
then
echo Good Evening
else
echo Good Night
fi
