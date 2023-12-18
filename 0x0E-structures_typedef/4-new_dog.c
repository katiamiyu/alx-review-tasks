#include "main.h"
#include <stdlib.h>
void _strcpy(char *s1, char *s2);
int _strlen(char *str);
/**
* new_dog - populate a dog object
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: new dog obj
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(*d));

	if (!d)
		return (NULL);

	d->name = malloc(sizeof(*name) * _strlen(name) + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(*owner) * _strlen(owner) + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}

/**
* _strcpy - copy content of string2 to string1
* @s1: string one
* @s2: string two
* Return: void
*/
void _strcpy(char *s1, char *s2)
{
	int i;

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			s1[i] = s2[i];
			i++;
		}
		s1[i] = '\0';
	}

}
/**
* _strlen - gets the length of a string
* @str: string argument
* Return: integer
*/
int _strlen(char *str)
{
	int i = 0;

	if (str != NULL)
		for (i = 0; str[i] != '\0'; i++)
			;

	return (i);
}
