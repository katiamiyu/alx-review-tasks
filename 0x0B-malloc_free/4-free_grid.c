#include "main.h"
/**
* free_grid - de-allocates two dimentional grids
* @grid: two dimentional array
* @height: total array rows
* Return: void
*/
void free_grid(int **grid, int height)
{
	int h = 0;

	while (h < height)
	{
		free(grid[h]);
		h++;
	}
	free(grid);
}
