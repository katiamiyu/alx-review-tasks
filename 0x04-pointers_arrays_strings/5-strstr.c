#include "main.h"
/**
* _strstr - finds the first occurence of a substring
* @haystack: given string argument
* @needle: substring argument
* Return: pointer to begining of substring
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
