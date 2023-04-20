#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @n: parameter's number
 * @separator: two numbers separator
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list jeff;

	va_start(jeff, n);

	if (separator == NULL)
		separator = "";

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(jeff, int));
		if (m < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(jeff);
}
