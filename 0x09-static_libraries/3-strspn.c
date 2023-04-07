#include "main.h"

/**
 * _strspn - a function to get the length of prefex substring
 *
 * @s: pointer to string
 * @accept: substring the prefix to find
 *
 * Return: number of bytes of the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int m, n, o;

	m = 0;
	while (s[m] != '\0')
	{
		n = 0;
		o = 1;
		while (accept[n] != '\0')
		{
			if (s[m] == accept[n])
			{
				o = 0;
				break;
			}
			n++;
		}
		if (o == 1)
			break;
		m++
	}
	return (m);
}
