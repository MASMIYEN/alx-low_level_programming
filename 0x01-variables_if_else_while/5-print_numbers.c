#include <stdio.h>

/**
 * Main - print all single digit numbers of base ten starting from zero
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
