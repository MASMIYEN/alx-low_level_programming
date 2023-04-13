#include "main.h"
#include <stdlib.h>

/**
 * *_memset - a function that fills memory with const bytes
 *
 * @s: area of memory to be filled
 * @n: char to copy
 * @m: times of copy number
 *
 * Return: pointer to s
 */

char *_memset(char *s, char n, unsigned int m)
{
	unsigned int i;

	for (i = 0; i < m; i++)
	{
		s[i] = n;
	}
	return (s);
}

/**
 * *_calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: Nb of elements in the array
 * @size: size of elements
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = malloc(nmemb * size);

	if (pt == NULL)
		return (NULL);

	_memset(pt, 0, nmemb * size);

	return (pt);
}
