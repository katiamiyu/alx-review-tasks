#include "main.h"
#include <stdio.h>
/**
* print_number - print a given number to screen
* @n: the number to print
* Return: void
*/
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -(n);
	}
	else
		m = n;
	if (m / 10 != 0)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
