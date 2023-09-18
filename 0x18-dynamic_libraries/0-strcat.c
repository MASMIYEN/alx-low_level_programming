#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest : destination string
 * @src : source string to append to dest
 *
 * Return: string of type char
 */
char *_strcat(char *dest, char *src)
{
	int i, j, a, b = 0, maxindex;
	int srcount = 0;
	int destcount = 0;
	char *ptr;

	ptr = dest;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destcount = destcount + 1;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		srcount = srcount + 1;
	}

	maxindex = destcount + srcount;

	for (a = 0; a < maxindex; a++)
	{
		if (a < destcount)
		{
			ptr[a] = dest[a];
		}
		else
		{
			ptr[a] = src[b];
			b++;
		}
	}
	return (ptr);
}
