#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: pointer to beginning of located needle
 * or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *match;

	while (*haystack != '\0')
	{
		match = haystack;
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] == '\0')
			{
				return (0);
			}
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (needle[i] == '\0')
		{
			return (match);
		}
		haystack++;
	}
	return (0);
}
