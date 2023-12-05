#include <stdio.h>
#include "main.h"
/**
* swap_int - swap the values of two wariables
* @a: first variable
* @b: second variable
* Return: void
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
