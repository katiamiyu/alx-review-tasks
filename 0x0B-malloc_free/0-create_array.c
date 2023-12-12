#include "main.h"
/**
* create_array - create array of char
* @size: size of array
* @c: char stored in array
* Return: pointer to array, NULL if fail
*/
char *create_array(unsigned int size, char c)
{
	char *charptr = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (!charptr || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		charptr[i] = c;
	}

	return (charptr);
}
