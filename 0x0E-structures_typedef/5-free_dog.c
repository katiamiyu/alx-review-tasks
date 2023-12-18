#include "main.h"
#include <stdlib.h>
/**
* free_dog - deallocate dog obj in mem
* @d: dog object
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
