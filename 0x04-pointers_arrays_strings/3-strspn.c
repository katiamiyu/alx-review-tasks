#include "main.h"
/**
* _strspn - a function that gets the length of
* substring
* @s: string parameter
* @accept: substing to find length
* Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int j, i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] =='\0')
				return (n);
			j++;
		}
		i++;
	}
	return (n);
}
