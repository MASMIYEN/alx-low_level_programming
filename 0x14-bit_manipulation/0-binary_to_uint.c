#include "main.h"

/**
 * binary_to_uint - converting a binary number
 * to unsigned integer
 *
 * @b: pointer to a string
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int m = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		m = (m << 1) | (*b - '0');
		b++;
	}
	return (m);
}
