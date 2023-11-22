#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: negative int (s1 < s2), 0 (s1 = s2) or positive int (s1 > s2)
 */
int _strcmp(char *s1, char *s2)
{
	int i, max = 0;
	int len1 = 0, len2 = 0, re = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (len1 >= len2)
	{
		max = len1;
	}
	else
	{
		max = len2;
	}
	for (i = 0; i <= max; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			re = s1[i] - s2[i];
			break;
		}
	}
	return (re);
}
