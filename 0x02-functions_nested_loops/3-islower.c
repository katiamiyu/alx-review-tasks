#include "main.h"
#include <stdio.h>
/**
* _islower - checks if input is liwercase
* @c: input argument to be checked
* Return: 1 (true), 0 (false)
*/
int _islower(char c)
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
