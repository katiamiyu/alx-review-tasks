#include <stdio.h>
/**
* main - entry point
* Return: always (0) success
*/
int main(void)
{
	/* fizzbuzz app */
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("fizzbuzz");
		}
		else if (i % 5 == 0)
		{
			printf("buzz");
		}
		else if (i % 3 == 0)
		{
			printf("fizz");
		}
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
	printf("\n");
	return (0);
}
