#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y
 *
 * @x: integer
 * @y: integer
 *
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int equal;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		equal = _pow_recursion(x, y / 2);
		return (equal * equal);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
