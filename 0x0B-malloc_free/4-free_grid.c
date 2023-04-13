#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function to free 2 dimensional grid
 * previously created by alloc_grid function
 *
 * @grid: pointer of 2 dimensional grid
 * @height: height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
