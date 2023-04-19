#include <stdio.h>
#include <stdlib.h>

/**
 * print_opCodes - a function that prints the opcodes of its own main function
 *
 * @c: main function's adress
 * @m: bytes's number
 *
 * Return: nothing
 */
void print_opCodes(char *c, int m)
{
	int l;

	for (l = 0; l < m; l++)
	{
		printf("%.2hhx", c[l]);
		if (l < m  - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - print opcodes
 *
 * @argc: arguments count
 * @argv: pointers to arumgemnts
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int m;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	m = atoi(argv[1]);

	if (m < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opCodes((char *)&main, m);
	return (0);
}
