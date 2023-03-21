#include "main.h"

/**
 * jack_bauer - print every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int m, n;

	m = 0;

	while (m < 24)
	{
		n = 0;
		while (n < 60)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(':');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
			n++;
		}
		m++;
	}
}
