#!/bin/bash

clear
echo "$(tput setaf 2)"
echo "starting script..."
sleep 1


if pgrep "mpg123" > /dev/null
then
    echo 
else
    mpg123 -Z song1.mp3 &
    echo
    echo "Music started!"
fi


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

#script for assigment
if [[ $REPLY =~ ^(1|2|3|4|5)$ ]]
then
echo "$(tput setaf 1)"
clear
echo "You chose script :"${REPLY}
echo "$(tput setaf 2)"
./ass${REPLY}

fi


sleep 2.5
exec ./run.sh
