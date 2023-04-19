#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array to srch within
 * @size: array's size
 * @cmp: ptr to comparing func
 *
 * Return: index of the first element for which the cmp
 * cmp function does not return 0
 * if no element matches or if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (m < size)
			{
				if (cmp(array[m]))
					return (m);
				m++;
			}
		}
	}
	return (-1);
}
