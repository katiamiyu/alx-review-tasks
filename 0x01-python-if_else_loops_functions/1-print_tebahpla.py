#!/usr/bin/python3
"""print the alphabets is decending order"""

def decendalpha():
	for i in range(ord('Z'), ord('A') - 1, -1):
		c = 0
		if (i % 2 == 1):
			c = i
		else:
			c = i + 32
		print(f"{chr(c)}", end="")

decendalpha()
