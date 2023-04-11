#include "main.h"
#include <stdio.h>

/**
 * _atoi - function to convert a string to integer
 *
 * @s: string
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int m, r, n, x, leng, digi;

	m = 0;
	r = 0;
	n = 0;
	x = 0;
	leng = 0;
	digi = 0;

	while (s[leng] != '\0')
		leng++;

	while (m < leng && x == 0)
	{
		if (s[m] == '-')
			++r;

		if (s[m] >= '0' && s[m] <= '9')
		{
			digi = s[m] - '0';
			if (r % 2)
				digi = -digi;
			n = n * 10 + digi;
			x = 1;

			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			x = 0;
		}
		m++;
	}
	if (x == 0)
		return (0);

	return (n);
}
/**
 * main - multiply numbers
 *
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0. on success, 1 if error
 */
int main(int argc, char *argv[])
{
	int numb1, numb2, result;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}

	numb1 = _atoi(argv[1]);
	numb2 = _atoi(argv[2]);
	result = numb1 * numb2;

	printf("%d\n", result);

	return (0);
}
