#!/usr/bin/python3
""" module read and print arguments"""
import sys

if __name__ == "__main__":
	count = len(sys.argv)
	if count == 1:
		print("0 arguments")
	elif count <= 2:
		print("1 argument")
		print(f"{count - 1}: {sys.argv[count - 1]}")
	elif count > 2:
		print(f"{count - 1} arguments")
		for i, a in enumerate(sys.argv):
			if not (i == 0):
				print(f"{i}: {a}")
