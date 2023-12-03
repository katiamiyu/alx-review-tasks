#include "main.h"
#include <stdio.h>
/**
* _isdigit - checks if input is a digit
* @c: input argument to be checked
* Return: 1 (true), 0 (false)
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
