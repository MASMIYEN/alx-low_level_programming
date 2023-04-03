#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	int pass[100];
	int m, sum, n;

	sum = 0;

	srand(time(NULL));

	for (m = 0; m < 100; m++)
	{
		pass[m] = rand() % 78;
		sum += (pass[m] + '0');
		putchar(pass[m] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
