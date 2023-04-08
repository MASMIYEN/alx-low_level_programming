#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of set of bytes
 *
 * @s: pointer to string
 * @accept: point to string to search for in s
 *
 * Return: pointer to bytes or NULL if no bytes found
 */

char *_strpbrk(char *s, char *accept)
{
	int m, n;

	m = 0;
	while (s[m] != '\0')
	{
		n = 0;
		while (accept[n] != '\0')
		{
			if (s[m] == accept[n])
				return (s + m);
			n++;
		}
		m++;
	}
	return ('\0');
}
