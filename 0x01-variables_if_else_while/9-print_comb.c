#include<stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 * numbers must be separated by , followed by a space
 * numbers should be printed in ascending order
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
