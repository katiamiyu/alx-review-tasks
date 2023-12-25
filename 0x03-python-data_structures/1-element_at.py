#!/usr/bin/python3
""" print members of a list"""

def  element_at(my_list, idx):
	""" prints retrieved element amd index

	Args:
		mylist: list object

	Return:
		The return valur. element
	"""

	if idx < 0:
		return None
	if idx > (len(my_list) - 1):
		return None
	return my_list[idx]
