#include <stdio.h>
#include "main.h"
/**
* main - entry point
* Return: always (0) success
*/
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
