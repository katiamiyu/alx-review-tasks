#!/usr/bin/python3
""" print members of a list"""

def replace_in_list(my_list, idx, element):
	""" replace element at  index

	Args:
		mylist: list object
		idx: integer index
		element: replace element

	Return:
		The return valur. element
	"""

	if idx < 0:
		return my_list
	if idx > (len(my_list) - 1):
		return my_list
	my_list[idx] = element
	return my_list
	
