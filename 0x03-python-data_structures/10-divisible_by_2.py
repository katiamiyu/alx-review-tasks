#!/usr/bin/python3

def divisible_by_2(my_list=[]):
	new_list = [ele % 2 == 0 for ele in my_list]
	return new_list
