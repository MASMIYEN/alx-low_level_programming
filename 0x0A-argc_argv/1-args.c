#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * arguments passed into it
 *
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0. Success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int m, n;

	m = 0;

	while (m < argc)
	{
		n = m;
		m++;
	}
	printf("%d\n", n);
	return (0);
}
