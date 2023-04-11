#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function to create array of characters &
 * intialize it with a specific character
 *
 * @size: size of the array
 * @c: char to initialize
 *
 * Return: pointer on success, otherwise return NULL
 */

char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int m = 0;

	if (size == 0)
		return (NULL);

	pt = (char *) malloc(sizeof(char) * size);

	if (pt == NULL)
		return (0);

	while (m < size)
	{
		*(pt + m) = c;
		m++;
	}
	*(pt + m) = '\0';
	return (pt);
}
