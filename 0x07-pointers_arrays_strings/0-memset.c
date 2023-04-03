#include "main.h"

/*
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer char type
 * @b: variable of the char type
 * @n: unsigned int variable to be filled
 * @m: unsigned int so the value will always be positive or zero
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
