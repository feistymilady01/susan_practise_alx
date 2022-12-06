#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
Ld = abs(number) % 10
if number < 0:
    Ld = Ld * -1
if Ld > 5:
    print(f'Last digit of {number} is {Ld} and is greater than 5')
elif Ld < 6 != 0:
    print("Last digit of {} is {} and is less than 6 and not 0".format(number, Ld))
else:
    print("Last digit of {} is {} and is 0".format(number, Ld))
