#include<stdio.h>

/**
 * main - Prints the size of various types
 * Return: 0 if exited successfully, non-zero otherwise
 */
int main(void)
{

	/* sizeof evaluates the size of a variable */
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);

}
