#!/usr/bin/python

def multiple_returns(sentence):
	result = 0, None
	if len(sentence) == 0:
		return result
	result = len(sentence), sentence[0]
	return result
