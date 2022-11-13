import RPi.GPIO as GPIO
import time

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
GPIO.setup(16, GPIO.OUT, initial = GPIO.LOW)

try :
    while True: # Run forever
        GPIO.output(16, GPIO.HIGH) # Turn on
        time.sleep(1) # Sleep for 1 second
        GPIO.output(16, GPIO.LOW) # Turn off
        time.sleep(1)
except KeyboardInterrupt:
        GPIO.cleanup()
