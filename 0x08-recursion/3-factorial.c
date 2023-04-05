#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: number
 *
 * Return: n's factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
