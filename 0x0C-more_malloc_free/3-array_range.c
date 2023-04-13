#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers.
 *
 * @max: max range of stored values
 * @min: min range of stored values
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *pt;
	int m, size;

	if (max < min)
		return (NULL);

	size = max - min + 1;

	pt = malloc(sizeof(int) * size);

	if (pt == NULL)
		return (NULL);

	for (m = 0; min <= max; m++)
		pt[m] = min++;

	return (pt);
}
