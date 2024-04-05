#!/bin/bash
rm -rf test.log
while read line; do
	echo "############################################################ \n"  | tee -a test.log
	echo "Launching testcase $line \n" | tee -a test.log
	./suprem4 $line | tee -a test.log

done < in_list
