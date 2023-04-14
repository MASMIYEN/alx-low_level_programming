#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to memory prev allocated
 * @old_size: size of allocated memory
 * @new_size: size update of the memory block
 *
 * Return: pointer to the updated allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	char *old_pt;
	unsigned int m;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pt = malloc(new_size);
	if (!pt)
		return (NULL);
	
	old_pt = ptr;

	if (old_size > new_size)
	{
		for (m = 0; m < new_size; m++)
			pt[m] = old_pt[m];
	}
	if (old_size < new_size)
	{
		for (m = 0; m < old_size; m++)
			pt[m] = old_pt[m];
	}
	free(ptr);
	return (pt);
}
