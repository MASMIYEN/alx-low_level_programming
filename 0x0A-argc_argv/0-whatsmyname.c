#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: arguments number
 * @argv: arguments array
 *
 * Return: 0 Success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
