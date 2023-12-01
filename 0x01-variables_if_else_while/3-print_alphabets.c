#include <stdio.h>
/**
* main - entry point of program
* Return: Always (0) success
*/
int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	for (int j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
