#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function to return a pointer to a
 * 2 dimensional array if integers
 *
 * @width: width
 * @height: height
 *
 * Return: grid on success, NULL if failed
 */

int **alloc_grid(int width, int height)
{
	int **grid, m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		grid[m] = malloc(width * sizeof(int));
		if (grid[m] == NULL)
		{
			while (m >= 0)
			{
				free(grid[m]);
				m--;
			}
			free(grid);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			grid[m][n] = 0;
	}
	return (grid);
}
