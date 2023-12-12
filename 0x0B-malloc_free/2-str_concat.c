#include "main.h"
/**
* str_concat - join two strings together
* @s1: first string
* @s2: second string
* Return: NULL (Failed), Pointer to new string
*/
char *str_concat(char *s1, char *s2)
{
	int count = 0, strcount = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[count] != '\0')
		count++;
	while (s2[strcount] != '\0')
		strcount++;

	str = (char *)malloc(sizeof(char) * (count + strcount));
	if (!str)
		return (NULL);

	count = strcount = 0;
	while (s1[count] != '\0')
	{
		str[strcount] = s1[count];
		strcount++;
		count++;
	}
	count = 0;
	while (s2[count] != '\0')
	{
		str[strcount] = s2[count];
		strcount++;
		count++;
	}
	str[strcount] = '\0';

	return (str);
}
