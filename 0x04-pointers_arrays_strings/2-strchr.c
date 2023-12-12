#include "main.h"
/**
* _strchr - finds a char in a string
* @s: string parameter
* @c: searched char
* Return: first occurence of char, or NULL
*/
char *_strchr(char *s, char c)
{
	if (!s)
		return (NULL);

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
