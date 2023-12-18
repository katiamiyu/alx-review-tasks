#include "main.h"
/**
* init_dog - populate a dog object
* @d: dog type
* @name: dog name
* @age: dog age
* @owner: dog owner
* return void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{	
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
