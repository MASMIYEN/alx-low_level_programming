#include<stdio.h>

/**
 * main - print all possible different combinations of three digits
 * the three digits must be different
 * print only the smallest combination of three digits
 * numbers should be printed in ascending order, with three digits
 *
 * Return:0
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
