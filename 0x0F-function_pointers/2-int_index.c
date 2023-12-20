#include "main.h"
/**
* int_index - finds the index of a integer
* @array: list of finite integers
* @size: size of the array
* @cmp: function pointer
* Return: index of found integer, -1 (failed)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
