#!/bin/bash

if [[ $1 == "add" ]]
then
	for file in `find sources -type f | grep '\.s'`
	do
		if [[ -z `grep _ft_ $file` ]]
		then
			sed -i.bak 's/ft_/_ft_/g' $file && rm $file.bak
		fi
	done
elif [[ $1 == "remove" ]]
then
	for file in `find sources -type f | grep '\.s'`
	do
		sed -i.bak 's/_ft_/ft_/g' $file && rm $file.bak
	done
else
	echo "usage: underscore [ add | remove ]"
fi
