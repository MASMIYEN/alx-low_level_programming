#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed by the src
 *
 * @dest: destination to copy to
 * @src: source to copy from
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int n = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for ( ; n < m ; n++)
	{
		dest[n] = src[n];
	}
	dest[m] = '\0';
	return (dest);
}
