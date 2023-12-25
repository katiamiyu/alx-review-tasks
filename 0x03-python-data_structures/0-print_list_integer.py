#!/usr/bin/python3
""" print members of a list"""

def  print_list_integer(my_list=[]):
	""" prints a list

	Args:
		mylist: list object

	Return:
		The return valur. nothing
	"""

	for i in my_list:
		print("{:d}".format(i))
