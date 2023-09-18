#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to locate
 *
 * Return: pointer to the first occurence of c or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
