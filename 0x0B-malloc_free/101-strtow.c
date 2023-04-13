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

void char_free_grid(char **grid, unsigned int height)
{
	if (height != 0 && grid != NULL)
	{
		for (; height > 0 ; height--)
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
	unsigned int m, n, k, m1, height;

	if (str == '\0' || str == NULL)
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
	for (n = m1 = 0; n < height; n++)
	{
		for (m = m1; str[m] != '\0'; m++)
		{
			if (str[m] == ' ')
				m1++;
			if (str[m] != ' ' && (str[m + 1] == ' ' || str[m + 1] == '\0'))
			{
				abcd[n] = malloc((m - m1 + 2) * sizeof(char));
				if (abcd[n] == NULL)
				{
					char_free_grid(abcd, n);
					return (NULL);
				}
				break;
			}
		}
		for (k = 0; m1 <= m; m++, k++)
			abcd[n][k] = str[m1];
		abcd[n][k] = '\0';
	}
	abcd[n] = NULL;
	return (abcd);
}
