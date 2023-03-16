#include<stdio.h>

/**
 * main - Prints the size of various types
 * Return: 0 if exited successfully, non-zero otherwise
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of short: %d byte(s)\n", sizeof(short));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long: %d byte(s)\n", sizeof(long));
	printf("Size of long long: %d byte(s)\n", sizeof(long long));
	printf("Size of float: %d bytes(s)\n", sizeof(float));
	printf("Size of double: %d bytes(s)\n", sizeof(double));
	printf("Size of long double: %d bytes(s)\n", sizeof(long double));
	return (0);
}
