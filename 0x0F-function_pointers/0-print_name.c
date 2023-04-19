#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a function to print a name
 * @name: printed name
 * @f: pointer to the the print function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
