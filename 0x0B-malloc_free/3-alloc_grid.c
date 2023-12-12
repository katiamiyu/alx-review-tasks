#include "main.h"
/**
* alloc_grid - creates two dimentional grid
* @width: width of the grid
* @height: height of the grid
* Return: pointer to new grid, NULL (Failed)
*/
int **alloc_grid(int width, int height)
{
	int **gridptr;
	int h = 0;

	if (width == 0 || height == 0)
		return (NULL);

	gridptr = calloc(height, sizeof(int *));


	if (!gridptr)
		return (NULL);

	while (h < height)
	{
		gridptr[h] = calloc(width, sizeof(int));
		if (!gridptr[h])
		{
			while (h >= 0)
			{
				free(gridptr[h]);
				h--;
			}
			return (NULL);
		}
		h++;
	}

	return (gridptr);
}
