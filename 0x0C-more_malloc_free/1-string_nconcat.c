#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -  a function that concatenates two strings.
 *
 * @s1: string we append to
 * @s2: string we concatenate from
 * @n: bytes number from s2 to s1
 *
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int m = 0, k = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (len2 > n)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!s)
		return (NULL);

	while (len1 > m)
	{
		s[m] = s1[m];
		m++;
	}
	while (n < len2 && m < (len1 + n))
		s[m++] = s2[k++];

	s[m] = '\0';

	return (s);
}
