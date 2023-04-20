#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 *
 * @n: parameter's number
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int m;
	int sum;
	va_list jeff;

	va_start(jeff, n);

	if (n == 0)
		return (0);

	for (m = 0; m < n; m++)
		sum += va_arg(jeff, int);

	va_end(jeff);

	return (sum);
}
