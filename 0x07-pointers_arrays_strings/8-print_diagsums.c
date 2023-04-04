#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of two diagonal
 * of a square matrix of integers
 *
 * @a: pointer
 * @size: matrix's size
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int m, n, o;

	n = 0;
	o = 0;

	for (m = 0; m < (size * size); m++)
	{
		if (m % (size + 1) == 0)
			n += a[m];
		if (m % (size - 1) == 0 && m != 0 && m < size * size - 1)
			o += a[m];
	}
	printf("%d, %d\n", n, o);
}
