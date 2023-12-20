#include "main.h"
/**
* print_name - prints content of a string var
* @name: string
* @f: pointer function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
