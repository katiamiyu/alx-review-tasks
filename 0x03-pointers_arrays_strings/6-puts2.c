#include "main.h"
/**
* puts2 - prints every other char of a string
* @str: string argument
* Return: void
*/
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 != 1)
		{
			_putchar(*str);
		}
		i++;
		str++;
	}
	_putchar('\n');
}
