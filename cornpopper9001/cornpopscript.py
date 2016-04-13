import RPi.GPIO as GPIO
import time
import sys
import threading
import os

threads = []

GPIO.setmode(GPIO.BCM)

pins = [18,27,22,23,24,25,5,6]

#Setting up all pins to function as output pins
for x in pins:
	GPIO.setup(x, GPIO.OUT)


#Setting all relays to: OFF
for x in pins:
	GPIO.output(x, GPIO.LOW)



#assigning GPIO pins to variable names

cornpopper9001 = 18
solenoid = 24


LEDbank1 = 22
LEDbank2 = 23

LEDbanks = [22,23]

#Set time variables
t0 = time.time()
popcorncookingtime = 135
#popcorncookingtime = 10

def LEDbanksON():
	interval = 0.05
	while time.time() - t0 < popcorncookingtime:
		GPIO.output(22, GPIO.HIGH)
		time.sleep(0.15)
		GPIO.output(22, GPIO.LOW)
		GPIO.output(23, GPIO.HIGH)
		time.sleep(0.15)
		GPIO.output(23, GPIO.LOW)

def cornpopper9001PowerOn():
	while time.time() - t0 < popcorncookingtime:
		GPIO.output(cornpopper9001, GPIO.HIGH)
		time.sleep(1)

	GPIO.output(cornpopper9001, GPIO.LOW)
	GPIO.output(6, GPIO.HIGH)
	time.sleep(0.2)
	GPIO.output(6, GPIO.LOW)
	time.sleep(0.2)
	GPIO.output(6, GPIO.HIGH)
	time.sleep(0.2)
	GPIO.output(6, GPIO.LOW)
	time.sleep(0.2)
	GPIO.output(6, GPIO.HIGH)
	time.sleep(0.2)
	GPIO.output(6, GPIO.LOW)

def shakeyshakey():
	freq = 0.05
	while time.time() - t0 < popcorncookingtime:
		for i in range(7):
			GPIO.output(solenoid, GPIO.HIGH)
			time.sleep(freq)
			GPIO.output(solenoid, GPIO.LOW)
			time.sleep(freq)
		time.sleep(0.5)


threads.append(threading.Thread(target=LEDbanksON))
threads.append(threading.Thread(target=cornpopper9001PowerOn))
threads.append(threading.Thread(target=shakeyshakey))

for t in threads:
	t.start()

for t in threads:
	t.join()
def march():
	os.system("clear")
	os.system("figlet Enjoy your freshly popped corn!")
	os.system("sudo ./hax")
	os.system("clear")

def blinkingend():
	for i in range(20):
		GPIO.output(22, GPIO.HIGH)
		time.sleep(1)
		GPIO.output(22, GPIO.LOW)
		GPIO.output(23, GPIO.HIGH)
		time.sleep(1)
		GPIO.output(23, GPIO.LOW)


endthreads = []
endthreads.append(threading.Thread(target=march))
endthreads.append(threading.Thread(target=blinkingend))

for t in endthreads:
	t.start()

for t in endthreads:
	t.join()

GPIO.cleanup()

os.system("clear")

sys.exit()
