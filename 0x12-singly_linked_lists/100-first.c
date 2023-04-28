#include <stdio.h>

/**
 * b4_main - a function to print a text before
 * executing main function
 *
 * Return: nothing
 */

void __attribute__ ((constructor)) b4_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
