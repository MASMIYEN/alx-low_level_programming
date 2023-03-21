#include "main.h"
/**
 * times_table - print the 9 times table, starting with 0
 */
void times_table(void)
{
	int m, n, o;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			o = n * m;
			if (n == 0)
			{
				_putchar(o + '0');
			}

			if (o < 10 && n != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			} else if (o >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((o / 10) + '0');
				_putchar((o % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
