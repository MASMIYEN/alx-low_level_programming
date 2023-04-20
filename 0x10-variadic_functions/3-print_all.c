#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything.
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int m;
	int ger;
	char *str;
	va_list jeff;

	va_start(jeff, format);
	m = 0;
	while (format != NULL && format[m] != '\0')
	{
		switch (format[m])
		{
			case 'i':
				printf("%i", va_arg(jeff, int));
				ger = 0;
				break;
			case 'c':
				printf("%c", va_arg(jeff, int));
				ger = 0;
				break;
			case 's':
				str = va_arg(jeff, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				ger = 0;
				break;
			case 'f':
				printf("%f", va_arg(jeff, double));
				ger = 0;
				break;
			default:
				ger = 1;
				break;
		}
		if (format[m + 1] != '\0' && ger == 0)
			printf(", ");
		m++;
	}
	printf("\n");
	va_end(jeff);
}
