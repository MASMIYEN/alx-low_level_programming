#include "main.h"

/**
 * get_endianness - check endians
 *
 * Return: 0 big endian || 1 litlle endian
 */
int get_endianness(void)
{
	unsigned int m = 0x01;
	char *ch = (char *)&m;

	return ((int)*ch);
}
