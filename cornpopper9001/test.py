#!/usr/bin/python
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)

# init list with pin numbers
list = [18, 17, 27, 22, 23, 24, 25, 26]

# loop through pins and set mode and state to 'low'
for x in list:
	GPIO.setup(x, GPIO.OUT)
# time to sleep between operations in the main loop

SleepTime1 = 0.01
SleepTime2 = 0.05

# main loop
for x in range(10):
	for i in list: 
		GPIO.output(i, GPIO.HIGH)
		print i
		time.sleep(SleepTime2)
		GPIO.output(i, GPIO.LOW)
		time.sleep(SleepTime1) 

GPIO.cleanup()
