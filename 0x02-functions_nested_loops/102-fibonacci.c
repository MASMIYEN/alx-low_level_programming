#include <stdio.h>
/**
 * main - Print first Fibonacci numbers, starting with 1 and 2,
 * separated by a comma and followed by a space
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fibo1 = 0, fibo2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);

		fibo1 = fibo2;
		fibo2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}

	return (0);
}
