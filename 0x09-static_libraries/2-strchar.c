#include "main.h"

/**
 * _strchr - function to locate a char in a string
 *
 * @s: pointer to the string
 * @c: char for locating from array
 *
 * Return: pointer to the first occurence of the char c in the str s
 * or NULL if the char is not found
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
