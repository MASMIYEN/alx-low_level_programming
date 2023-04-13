#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory using malloc
 *
 * @b: number of bytes
 *
 * Return: pointer to the new allocated memory, if fails exit with 98
 */

void *malloc_checked(unsigned int b)
{
	void *mem_alloc;

	mem_alloc = malloc(b);
	if (mem_alloc == NULL)
		exit(98);

	return (mem_alloc);
}
