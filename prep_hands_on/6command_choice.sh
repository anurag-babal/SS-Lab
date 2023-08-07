#!/bin/bash

menu() {
	echo "1. ls"
	echo "2. pwd"
	echo "3. who"
	echo "4. exit"
}

while [ true ]; do
	menu
	read -p "Select a choice: " choice
	case $choice in
		1)
			ls
			;;
		2)
			pwd
			;;
		3)
			who
			;;
		4)
			break
	esac
done
exit 0
