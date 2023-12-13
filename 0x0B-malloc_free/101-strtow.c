#include "main.h"
/**
* strtow - split string words
* @str: string input
* Return: NULL (failed), pointer array
*/
char **strtow(char *str)
{
	char **buffer;
	char *temp;
	int i = 0, h = 0;

	if (str == NULL || str == "")
		return (NULL);

	buffer = malloc(sizeof(char *) + 10);

	if (buffer == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		
	}

}
