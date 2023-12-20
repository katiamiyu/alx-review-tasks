#include "main.h"
/**
* array_iterator - prints content of a finite list
* @array: array of integer
* @size: number of elements
* @action: function to perform
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
