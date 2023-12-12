#include "main.h"
/**
* _strpbrk - locates first occurence of substring
* in a string
* @s: string argument
* @accept: substring argument
* Return: pointer to byte in S that matches accept
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
