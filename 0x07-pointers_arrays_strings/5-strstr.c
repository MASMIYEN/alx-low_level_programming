#include "main.h"

/**
 * _strstr - a function to locate a substring
 *
 * @haystack: string to search for matching substring
 * @needle: substring to look for
 *
 * Return: pointer in the begin of substring or NULL if no substring is found
 */

char *_strstr(char *haystack, char *needle)
{
	char *m, *n;

	while (*haystack != '\0')
	{
		m = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (m);
		haystack++;
	}
	return ('\0');
}
