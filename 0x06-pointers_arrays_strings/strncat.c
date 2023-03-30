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

	m = 0;
	while (dest[m] != '\0')
	{
		i++;
	}
	j = 0;
	while (p < n && src[p] != '\0')
	{
	    dest[m] = src[p];
	    p++;
	    p++;
	}
	dest[m] = '\0';
	return (dest);
}
