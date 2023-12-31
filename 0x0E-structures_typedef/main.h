#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
/**
* dog - dog object
* @name: dog name
* @age: dog age
* owner: dog owner
*
* Description: this is a dog object, for defining dogs
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
