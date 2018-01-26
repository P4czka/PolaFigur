#!/bin/bash

#This simple script will autocompile program

#creating and changing directory to build to not create mess in main folder
mkdir build
cd build

#building program & executables
cmake .. && make

#Asking about start of the program
read -r -p "Wystartowac program? [Y/n] " response
case "$response" in
	[nN][oO]|[nN])
	exit;;
	
	*)
	sleep 1
	./AreaCalculator
	;;
esac

