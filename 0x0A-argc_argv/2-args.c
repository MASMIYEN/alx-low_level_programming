#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments that receives
 *
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0. on success
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
		printf("%s\n", argv[m]);
	return (0);
}
