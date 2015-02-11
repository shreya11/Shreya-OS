ls $l "$1" 
echo "do you want to revoke the read and write permission for file $a? (Y/N)"
read choice
if [ $choice = 'y' -o $choice = 'Y' ]
then 
chmod 111 $1
ls -l "$1"
fi

