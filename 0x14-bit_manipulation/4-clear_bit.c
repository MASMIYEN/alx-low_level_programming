#include "main.h"

/**
 * clear_bit - set bit's value to 0
 *
 * @n: pointer of number
 * @index: bit index to set on
 *
 * Return: 1 on success || -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	m = 1UL << index;
	*n &= ~m;

	return (1);
}
