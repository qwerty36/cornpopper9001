#!/bin/bash

clear
echo "$(tput setaf 2)"
echo "starting script..."
sleep 1
mpg123 song1.mp3 &
echo
echo
echo
toilet -f bigascii12  Welcome
echo
sleep 1
echo "$(tput setaf 1)Please choose an assigment to submit the answers for. "
echo "$(tput setaf 2)"

read -p "What assignment? (1-5)? " -n 1 -r
echo
echo
sleep 0.5


#if input is shit
if [[ ! $REPLY =~ ^(1|2|3|4|5)$ ]]; then
	echo "$(tput setaf 1)"
	echo "Invalid assigment number, please try again. "
	echo "$(tput setaf 2)"
	sleep 2
	./run.sh
	sleep 1
fi

#script for assigment 1
if [[ $REPLY =~ ^[1]$ ]]
then
echo "$(tput setaf 1)"
clear
echo "You chose script 1"
echo "$(tput setaf 2)"
./ass1

fi


#script for assigment 2
if [[ $REPLY =~ ^[2]$ ]]
then
echo "$(tput setaf 1)"
clear
echo "You chose script 2"
echo "$(tput setaf 2)"
./ass2

fi

#script for assigment 3
if [[ $REPLY =~ ^[3]$ ]]
then
echo "$(tput setaf 1)"
clear
echo "You chose script 3"
echo "$(tput setaf 2)"
./ass3

fi

#script for assigment 4
if [[ $REPLY =~ ^[4]$ ]]
then
echo "$(tput setaf 1)"
clear
echo "You chose script 4"
echo "$(tput setaf 2)"
./ass4

fi

#script for assigment 5
if [[ $REPLY =~ ^[5]$ ]]
then
echo "$(tput setaf 1)"
clear
echo "You chose script 5"
echo "$(tput setaf 2)"
./ass5

fi

sleep 2.5
exec ./run2.sh
