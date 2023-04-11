#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * of an amount of money
 *
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0 on Success, 1 if error
 */

int main(int argc, char *argv[])
{
	int nb, m, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nb = atoi(argv[1]);
	res = 0;

	if (nb < 0)
	{
		printf("0\n");
		return (0);
	}
	for (m = 0; m < 5 && nb >= 0; m++)
	{
		while (nb >= coins[m])
		{
			res++;
			nb -= coins[m];
		}
	}
	printf("%d\n", res);
	return (0);
}
