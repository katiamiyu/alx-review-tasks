#!/usr/bin/python3
def max_integer(my_list=[]):
	max_int = 0
	if not my_list:
		return None
	for i in my_list:
		if max_int < i:
			max_int = i
	return max_int
