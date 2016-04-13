#!/bin/bash
clear
echo "$(tput setaf 2)"
echo "starting script..."
sleep 1



echo
echo
echo
toilet -f bigascii12  Welcome
echo
sleep 1
echo "$(tput setaf 1)Initializing connection...  "
echo "$(tput setaf 2)"


echo
echo
sleep 0.5


./input
sleep 1
clear
toilet --gay -f ascii9.tlf Thank you, Restarting...

sleep 4.5
exec ./run.sh