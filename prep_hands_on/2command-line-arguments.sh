#!/bin/bash
count=$#
if [ $count -ne 3 ]
then
	echo "Number of arguments not 3"
	exit 0
fi
for i in $@
do
	echo "$i"
done
