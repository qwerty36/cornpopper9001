#!/usr/bin/python
import RPi.GPIO as GPIO
import time
import sys
import threading

GPIO.setmode(GPIO.BCM)
pins = [18,27,22,23,24,25,5,6]

for x in pins:
	GPIO.setup(x, GPIO.OUT)


for x in pins:
	GPIO.output(x, GPIO.LOW)


cornpopper9001 = 18
LEDbank1 = 22
LEDbank2 = 23
buzzer = 6

tStart = time.time()

def power():
	while time.time() - tStart < 20:
		GPIO.output(cornpopper9001, GPIO.HIGH)
		time.sleep(1)
	GPIO.output(cornpopper9001,GPIO.LOW)


def lights():
	while time.time() - tStart < 20:
		GPIO.output(LEDbank1, GPIO.HIGH)
		time.sleep(0.5)
		GPIO.output(LEDbank1, GPIO.LOW)
		GPIO.output(LEDbank2, GPIO.HIGH)
		time.sleep(0.5)
		GPIO.output(LEDbank2, GPIO.LOW)

def sound():
	while time.time() - tStart < 20:
		GPIO.output(buzzer, GPIO.HIGH)
		time.sleep(0.3)
		GPIO.output(buzzer, GPIO.LOW)
		time.sleep(0.7)

threads = []

threads.append(threading.Thread(target=power))
threads.append(threading.Thread(target=lights))
threads.append(threading.Thread(target=sound))

for t in threads:
	t.start()

for t in threads:
	t.join()


GPIO.cleanup()
sys.exit