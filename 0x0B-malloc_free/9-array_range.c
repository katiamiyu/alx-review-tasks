#include "main.h"
/**
* array_range - create and initialize array
* @min: lowest limit of array
* @max: upper limit of array
* Return: new integer array, NULL (failed)
*/
int *array_range(int min, int max)
{
	int *ptr;
	int count = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (!ptr)
		return (NULL);

	while (min <= max)
	{
		ptr[count] = min;
		min++;
		count++;
	}

	return (ptr);
}
