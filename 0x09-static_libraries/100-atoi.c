#include "main.h"

/**
 * _atoi - a function to convert a string into an integer
 *
 * @s: string to be converted
 *
 * Return: int converted from the string
 */

int _atoi(char *s)
{
	int i, m, n, len, f, digit;

	i = 0;
	m = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++m;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (m % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
