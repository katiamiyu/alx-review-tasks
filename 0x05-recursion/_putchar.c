#include <stdio.h>
#include <unistd.h>
/**
* _putchar - entry point
* @c: char value to be written
* Return: always (1) success, (-1) fail
*/
int _putchar(int c)
{
	return (write(1, &c, 1));
}
