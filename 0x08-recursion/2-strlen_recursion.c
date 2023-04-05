#include "main.h"

/**
 * _strlen_recursion - a function that returns length of a string
 *
 * @s: string to be measured
 *
 * Return: string's length
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
