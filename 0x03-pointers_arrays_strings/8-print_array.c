#include <stdio.h>
#include "main.h"
/**
* print_array - prints the elements of an array
* @a: integer array argument
* @n: integer argument representing length
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
