#include "main.h"
/**
* factorial - finds the factorial of a number
* @n: integer argument
* Return: -1 (failed), 1 if n = 0, factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
