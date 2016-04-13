#!/bin/bash

clear
echo "$(tput setaf 2)"
toilet -f bigascii12 Warming up
echo "$(tput setaf 1)"
sleep 1

python warmup.py
clear
figlet Insert Corn
echo "$(tput setaf 2)"
sleep 4
echo "10 seconds remaining"
echo
sleep 1
echo "9 seconds remaining"
echo
sleep 1
echo "8 seconds remaining"
echo
sleep 1
echo "7 seconds remaining"
echo
sleep 1
echo "6 seconds remaining"
echo
sleep 1
echo "5 seconds remaining"
echo
sleep 1
echo "4 seconds remaining"
echo
sleep 1
echo "3 seconds remaining"
echo
sleep 1
echo "2 seconds remaining"
echo
sleep 1
echo "1 second remaining"
sleep 1

clear
figlet Lets get Popping! 

sleep 2

python cornpopscript.py