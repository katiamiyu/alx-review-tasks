#include "main.h"
/**
* argstostr - concatenate array of strings
* @ac: count of string
* @av: array of string
* Return: new string, NULL (Failed)
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int h, w, t;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	h = w = t = 0;
	while (av[h] != NULL)
	{
		while ( av[h][w] != '\0')
		{
			t++;
			w++;
		}
		h++;
	}

	str = malloc((t + ac) * sizeof(char) + 1);

	if (!str)	
		return (NULL);

	h = t = 0;
	while (av[h] != NULL)
	{
		w = 0;
		while (av[h][w] != '\0')
		{
			str[t] = av[h][w];
			w++;
			t++;
		}
		if (str[t] == '\0')
			str[t++] = '\n';
		h++;
	}
	return (str);
}
