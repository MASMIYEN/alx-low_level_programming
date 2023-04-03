#include "main.h"
/**
 * reset_to_98 - updates the value a pointer points to 98
 * @n: pointer to be updated
 *
 */
void reset_to_98(int *n)
{
	int *p = n;

	*p = 98;
}
