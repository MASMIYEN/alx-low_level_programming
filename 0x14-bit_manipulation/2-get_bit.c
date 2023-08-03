#include "main.h"

/**
 * get_bit - return bit's value
 *
 * @n: pointer number
 * @index: index that start from 0
 *
 * Return: 1 on success || -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = 1UL << index;
	return ((n & m) ? 1 : 0);
}
