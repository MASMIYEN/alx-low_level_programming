#include "main.h"

/**
 * flip_bits - return bits number to flip
 *
 * @n: unsigned int to flip
 * @m: unsigned int to flip too
 *
 * Return: flipped unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int calc = 0;
	unsigned long int flip_res = n ^ m;

	while (flip_res)
	{
		calc += flip_res & 1;
		flip_res >>= 1;
	}
	return (calc);
}
