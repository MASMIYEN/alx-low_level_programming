#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: string
 *
 * Return: lenght in integer type
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}

	return (lenght);
}


