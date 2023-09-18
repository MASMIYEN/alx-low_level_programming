#include "main.h"
/**
 * _abs - computes the absolute value of an int
 * @i : value to compute
 *
 * Return: absolute value of i
 */
int _abs(int i)
{

	if (i < 0)
	{
		i = i * (-1);
		return (i);
	}
	else
		return (i);
}

