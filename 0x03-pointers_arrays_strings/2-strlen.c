#include <stdio.h>
#include "main.h"
/**
* _strlen - counts the length of a string
* @s: array of chars
* Return: integer (length of string)
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
