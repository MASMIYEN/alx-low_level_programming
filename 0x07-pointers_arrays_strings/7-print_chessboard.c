#include "main.h"

/**
 * print_chessboard - print chessboard
 *
 * @a: pointer
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int m, n;

	m = 0;
	n = 0;
	while (m < 64)
	{
		if (m % 8 == 0 && m != 0)
		{
			n = m;
			_putchar('\n');
		}
		_putchar(a[m / 8][m - n]);
		m++;
	}
	_putchar('\n');
}
