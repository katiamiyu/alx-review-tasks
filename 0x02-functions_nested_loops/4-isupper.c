#include "main.h"
#include <stdio.h>
/**
* _isupper - checks if input is liwercase
* @c: input argument to be checked
* Return: 1 (true), 0 (false)
*/
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}
