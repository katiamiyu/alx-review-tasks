#include <stdio.h>
#include "main.h"
/**
* _puts - prints a string to screen
* @str: string argument
* Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
