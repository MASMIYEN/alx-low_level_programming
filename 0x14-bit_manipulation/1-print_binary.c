#include "main.h"

/**
 * print_binary - print binary represtentation 
 * of a numberr
 *
 * @n: parameter of the function
 *
 * Return: binary rep
 */

void print_binary(unsigned long int n)
{
	int m;
	for (m = 63; m >= 0; m--)
	{
		printf("%ld", (n >> m) & 1);
	}
	printf("\n");
}
