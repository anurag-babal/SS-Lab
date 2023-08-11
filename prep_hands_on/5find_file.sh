#!/bin/bash

if [ $# -ne 1 ]; then
	echo "Please give a filename"
	exit 0
fi

if [ -n $() ]; then
	echo "File found"
else
	echo "File not found"
fi
exit 0
