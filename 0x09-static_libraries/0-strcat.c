#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: input value
 * @src: input value
 *
 * Return: des
 */

char *_strcat(char *dest, char *src)
{
	int m;
	int n;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
