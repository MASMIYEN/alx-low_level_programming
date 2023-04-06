#include "main.h"

/**
 * sqrt_check - a function to check for the square of n
 *
 * @m: integer to guess in sqrt
 * @n: numbrt to find the sqrt of
 *
 * Return: sqrt of n || -1
 */

int sqrt_check(int m, int n)
{
	if (m * m == n)
		return (m);
	if (m * m > n)
		return (-1);
	return (sqrt_check(m + 1, n));
}

/**
 * _sqrt_recursion - that returns the natural square root of number
 *
 * @n: integer to find its sqrt
 *
 * Return: natrual square || -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
