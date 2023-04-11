#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function to copy a string as parameter
 *
 * @str: string to copy
 *
 * Return: pointer to string's copy on Success, otherwise NULL
 */

char *_strdup(char *str)
{
	char *cpy;
	unsigned int m, len;

	m = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	while ((cpy[m] = str[m]) != '\0')
		m++;

	return (cpy);
}
