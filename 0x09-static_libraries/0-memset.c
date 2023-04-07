#include "main.h"

/**
 * _memset - a function that fills memory with const byte
 *
 * @s: pointer char type
 * @n: unsigned int var to be filled
 * @b: char type
 *
 * Return: pointer to filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;

	return (s);
}
