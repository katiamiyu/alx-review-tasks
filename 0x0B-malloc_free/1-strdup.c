#include "main.h"
/**
* _strdup - creates a duplicate of a string
* @str: string to duplicate
* Return: pointer to duolicated string
*/
char *_strdup(char *str)
{
	char *duptr = (char *)malloc(sizeof(str) + 1);
	int i = 0;

	if (!str)
		return (NULL);

	if (!duptr)
		return (NULL);
	while (str[i] != '\0')
	{
		duptr[i] = str[i];
		i++;
	}
	return (duptr);
}
