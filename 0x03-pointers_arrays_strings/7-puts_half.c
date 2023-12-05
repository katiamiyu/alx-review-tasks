#include "main.h"
/**
* puts_half - prints the other half of a string
* @str: string argument
* Return: void
*/
void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	j = (i % 2 == 1) ? ((i - 1) / 2) : (i / 2);
	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
