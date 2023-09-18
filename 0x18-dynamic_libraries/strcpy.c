#include "main.h"
/**
 * _strcpy - copies string to a buffer
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer of type char
 */
char *_strcpy(char *dest, char *src)
{
	int i, counter = 0;
	char *copied;

	while (src[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i <= counter; i++)
	{
		dest[i] = src[i];
	}
	copied = dest;
	return (copied);
}

