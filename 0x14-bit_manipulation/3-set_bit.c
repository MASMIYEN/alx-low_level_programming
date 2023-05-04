#include "main.h"

/**
 * set_bit - set a bit's value to 1
 *
 * @n: pointer to number
 * @index: index to start from 0
 *
 * Return: 1 on success || -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) *8 - 1))
		return (-1);

	*n |= (iul << index);
	return (1);
}
