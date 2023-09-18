#include "main.h"
/**
 * _isdigit - checks for a digit 0 through 9
 * @c: integer to check
 *
 * Return: 1 if digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
