import RPi.GPIO as GPIO
import time
import sys
import threading

threads = []

GPIO.setmode(GPIO.BCM)

pins = [18,17,27,22,23,24]

#Setting up all pins to function as output pins
for x in pins:
	GPIO.setup(x, GPIO.OUT)


#Setting all relays to: OFF
for x in pins:
	GPIO.output(x, GPIO.LOW)



#assigning GPIO pins to variable names

cornpopper9001 = 18
solenoid = 17

"""
LEDbank1:
3rd Relay
3 LEDS
in OFF state to the color RED
in ON state to the color GREEN

LEDbank2:
4th Relay
3 LEDS
in OFF state to the color GREEN
in ON state to the color RED

LEDbank 3:
5th Relay
3 LEDS
in OFF state to the color GREEN
in ON state to the color RED
"""

LEDbank1 = 27
LEDbank2 = 22
LEDbank3 = 23

LEDbanks = [27,22,23]

#Set time variables
t0 = time.time()
popcorncookingtime = 10
LEDblinkdelay = 3
LEDtime = popcorncookingtime + LEDblinkdelay

#provides power to the LEDrelays
GPIO.output(24, GPIO.HIGH)


def LEDbanksON():
	interval = 0.05
	while time.time() - t0 < LEDtime:
		for x in LEDbanks:
			GPIO.output(x, GPIO.HIGH)
		time.sleep(interval)
		for x in LEDbanks:
			GPIO.output(x, GPIO.LOW)
		time.sleep(interval)
	GPIO.output(24, GPIO.LOW)

def cornpopper9001PowerOn():
	while time.time() - t0 < popcorncookingtime:
		GPIO.output(cornpopper9001, GPIO.HIGH)
		time.sleep(1)

	GPIO.output(cornpopper9001, GPIO.LOW)

def shakeyshakey():
	freq = 0.01
	while time.time() - t0 < popcorncookingtime:
		for i in range(5):
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


GPIO.cleanup()

sys.exit()
