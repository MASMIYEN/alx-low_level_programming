#include<stdio.h>

/**
 * main - print the lowercase alphabet in reverse
 *
 * followed by a new line
 *
 * Return: 0
 */
inti main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
