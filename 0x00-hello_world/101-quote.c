#include <unistd.h>

/**
 * main - Entry point
 * Print a quote using write function
 * followed by a newline,
 *
 *Return: Always 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
