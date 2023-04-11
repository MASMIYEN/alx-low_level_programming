#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - a function to concatenate two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: char s on success, NULL on error
 */

char *str_concat(char *s1, char *s2)
{
	int m = 0;
	int n = 0;
	int p, r;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[m] != '\0')
		m++;
	while (s2[n] != '\0')
		n++;

	s = malloc((m * sizeof(char)) + ((n + 1) * sizeof(char)));

	if (s == NULL)
		return (NULL);

	for (p = 0; s1[p] != '\0'; p++)
		s[p] = s1[p];

	for (r = 0; s2[r] != '\0'; r++)
	{
		s[p] = s2[r];
		p++;
	}

	s[p] = '\0';

	return (s);
}
