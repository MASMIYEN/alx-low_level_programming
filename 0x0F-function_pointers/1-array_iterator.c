#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 * @array: array to iterat
 * @size: arrays's size
 * @action: pointer to our function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (!array || !action)
		return;
	for (m = 0; m < size; m++)
		action(array[m]);
}
