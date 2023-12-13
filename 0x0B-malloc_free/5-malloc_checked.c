#include "main.h"
/**
* malloc_checked - creates and allocate mem
* @b: number of bytes
* Return: pointer to new memory
*/
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof b);
	if (!ptr)
		exit(98);
	return (ptr);
}
