#include "main.h"
#include <stdlib.h>

/**
 * char_free_grid - free 2d arrays
 *
 * @grid: 2d array of char
 * @height: array's height
 *
 * Return: nothing
 */

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - a function to split string into words
 *
 * @str: string
 *
 * Return: pointer of arrays who contain integers
 */

char **strtow(char *str)
{
	char **abcd;
	unsigned int m, height, i, j, m1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (m = height = 0; str[m] != '\0'; m++)
		if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
			height++;
	abcd = malloc((height + 1) * sizeof(char *));
	if (abcd == NULL || height == 0)
	{
		free(abcd);
		return (NULL);
	}
	for (i = m1 = 0; i < height; i++)
	{
		for (c = m1; str[m] != '\0'; m++)
		{
			if (str[m] == ' ')
				m1++;
			if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
			{
				abcd[i] = malloc((m - m1 + 2) * sizeof(char));
				if (abcd[i] == NULL)
				{
					ch_free_grid(abcd, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= m; m1++, j++)
			abcd[i][j] = str[m1];
		abcd[i][j] = '\0';
	}
	abcd[i] = NULL;
	return (abcd);
}
