#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest : destination string
 * @src : string to add to destination string
 * @n : max bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	int a, b = 1;
	char *ptr;

	ptr = dest;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != src[n])
	{
		j++;
	}

	for (a = 0; a < i + j; a++)
	{
		if (a == i)
		{
			dest[a] = src[0];
		}
		else if (a > i)
		{
			dest[a] = src[b];
			b++;
		}
	}
	return (ptr);
}
