#!/usr/bin/python3
""" implement calculator module"""

if __name__ == "__main__":
	from calculator_1 import add, sub, mul, div
	a, b = 70, 7

	print(f"{a} + {b}: {add(a, b)}")
	print(f"{a} - {b}: {sub(a, b)}")
	print(f"{a} x {b}: {mul(a, b)}")
	print(f"{a} / {b}: {div(a, b)}")
