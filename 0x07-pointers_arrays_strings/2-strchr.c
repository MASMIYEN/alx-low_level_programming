#include "main.h"

/**
 * _strchr - function to locate a character in a string
 *
 * @s:  pointer to the string
 * @c: character for locating from array
 *
 * Return: pointer to the first occurence of the character c in the string s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
