#!/usr/bin/python3

def search_replace(my_list, search, replace):
	"""new_list = []
	for x in my_list:
		if x == search:
			new_list.append(replace)
		else:
			new_list.append(x)"""
	"""new_list = list(map(lambda x : replace if x == search else x, my_list))"""
	new_list = [replace if x == search else x for x in my_list]
	return new_list
