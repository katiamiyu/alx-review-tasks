#include <stdio.h>
/**
* main - entry point of program
* Return: Always (0) success
*/
int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (char j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}

	putchar('\n');
	return (0);
}
