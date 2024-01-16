#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - function
 * @array: desc
 * @size: desc
 * @value: desc
 *
 * Return: Return
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
