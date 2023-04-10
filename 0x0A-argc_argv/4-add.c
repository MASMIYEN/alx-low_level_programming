#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - add posisitve number followed by a new line
 *
 * @argc: arguments number
 * @argv: arguments arrays
 *
 * Return: 0 if no number passed, followed by a new line
 * 1 if one of the number contains symbols and print Error
 */

int main(int argc, char *argv[])
{
	int numb1, digi, total;

	total = 0;

	for (numb1 = 1; numb1 < argc; numb1++)
	{
		for (digi = 0; argv[numb1][digi]; digi++)
		{
			if (argv[numb1][digi] < '0' || argv[numb1][digi] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[numb1]);
	}
	printf("%d\n", total);

	return (0);
}
