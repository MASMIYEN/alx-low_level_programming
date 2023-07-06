#include "main.h"

/**
 * get_endianness - check Endians
 *
 * Return: 0 big Endian || 1 litlle Endian
 */
int get_endianness(void)
{
	unsigned int m = 0x01;
	char *ch = (char *)&m;

	return ((int)*ch);
}
