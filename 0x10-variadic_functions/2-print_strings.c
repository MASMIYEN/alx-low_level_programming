#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * followed by a new line
 *
 * @separator: strings separator
 * @n: parameters number
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int m;
	va_list jeff;

	va_start(jeff, n);
	if (separator == NULL)
		separator = "";

	for (m = 0; m < n; m++)
	{
		str = va_arg(jeff, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (m < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(jeff);
}
