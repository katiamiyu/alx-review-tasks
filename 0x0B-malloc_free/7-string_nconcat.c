#include "main.h"
/**
* string_nconcat - concats two strings, copy first n 
* chars of s2
* @s1: first string
* @s2: second string
* @n: number of s2 to concat with s1
* Return: new string, NULL (failed)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int cnt1, cnt2, cnt12, i;
	char *str;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	cnt1 = cnt2 = cnt12 = i = 0;

	while (s1[cnt1] != '\0')
		cnt1++;

	while (s2[cnt2] != '\0')
		cnt2++;

	if (n < cnt2)
		cnt2 = n;

	cnt12 = cnt1 + cnt2 + 1;
	str = malloc(sizeof *str * cnt12);
	if (!str)
		return (NULL);

	cnt12 = i = 0;
	while (i < cnt1)
	{
		str[i] = s1[i];
		i++;
		cnt12++;
	}

	i = 0;
	while (i < cnt2)
	{
		str[cnt12] = s2[i];
		i++;
		cnt12++;
	}
	str[cnt12] = '\0';
	return (str);
}
