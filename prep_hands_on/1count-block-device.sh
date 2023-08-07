#!/bin/bash
count=`ls -l /dev/ | grep ^b | wc -l`
echo "Number of block devices = $count"

echo "Number of block devices = `ls -l /dev/ | grep -c ^b`"
