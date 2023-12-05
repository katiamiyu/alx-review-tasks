#include "main.h"
#include <stddef.h>
/**
* rev_string - reverse the chars of a string
* @s: string argument
* Return: void
*/
void  rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > j)
	{
		i--;
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
	}
}
