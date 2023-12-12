#include "main.h"
/**
* print_chessboard - prints a chess board
* @a: pointer to array
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (j < 8)
	{
		i = 0;
		while (i < 8)
		{
			_putchar(a[j][i]);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
