#include "main.h"
/**
 * _memcpy - a function thatcopies memory area
 *
 * @dest: where to copy
 * @src: source to copy from
 *
 * @n: bytes of @src
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		dest[m] = src[m];

	return (dest);
}
