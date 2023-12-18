#include "main.h"
/**
* print_dog - print elements of dog obj
* Return: void
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name != NULL)
			printf("Name: %s\n", (*d).name);
		else
			printf("Name: (nill)\n");
		printf("Age: %.2f\n", (*d).age);
		if ((*d).owner != NULL)
			printf("Owner: %s\n", (*d).owner);
		else
			printf("Owner: (nill)\n");
	}
}
