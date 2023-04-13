#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function to concatenate all arguments of program
 *
 * @ac: argument numbers
 * @av: argument arrays
 *
 * Return: arg if success, NULL if ac == 0 or av == NULL
 * on fail returns NULL
 */

char *argstostr(int ac, char **av)
{
	int m, n, k, size;
	char *arg;

	k = 0;
	size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	m = 0;
	while (m < ac)
	{
		n = 0;
		while (av[m][n])
		{
			n++;
			size++;
		}
		m++;
		size++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	m = 0;
	while (m < ac)
	{
		n = 0;
		while (av[m][n])
		{
			arg[k] = av[m][n];
			n++;
			k++;
		}
		arg[k] = '\n';
		k++;
		m++;
	}
	arg[k] = '\0';
	return (arg);
}
