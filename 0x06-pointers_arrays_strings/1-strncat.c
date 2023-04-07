#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int p;

	a = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	b = 0;
	while (p < n && src[p] != '\0')
	{
	dest[m] = src[p];
	m++;
	p++;
	}
	dest[m] = '\0';
	return (dest);
}
