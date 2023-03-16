#include<stdio.h>

/**
 * main - Prints the size of various types
 * Return: 0 if exited successfully, non-zero otherwise
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of float: %d bytes(s)\n", sizeof(float));
	return (0);
}
