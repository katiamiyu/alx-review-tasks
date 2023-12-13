#include "main.h"
/**
* _calloc - create a new mem allocation
* @nmemb: number of memory allocated
* @size: size in byte
* Return: new memory pointer, NULL (failed)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
