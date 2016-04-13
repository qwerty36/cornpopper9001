#!/usr/bin/python
import RPi.GPIO as GPIO
import time
import os

GPIO.setmode(GPIO.BCM)

# init list with pin numbers
list = [24]

# loop through pins and set mode and state to 'low'
for x in list:
	GPIO.setup(x, GPIO.OUT)
# time to sleep between operations in the main loop

SleepTime1 = 0.1
SleepTime2 = 0.2

# main loop
for x in range(100):
	for i in list: 
		GPIO.output(i, GPIO.HIGH)
		time.sleep(SleepTime2)
		GPIO.output(i, GPIO.LOW)
		time.sleep(SleepTime1) 

GPIO.cleanup()