#include "main.h"
/**
 * check - a function to check if the number given is prime
 *
 * @m: integer
 * @p: integer
 *
 * Return: 0 if m is not a factor of p,
 * 1 if m is a prime factor of p
 */

int check(int m, int p)
{
	if (p < 2 || p % m == 0)
		return (0);
	else if (m > p / 2)
		return (1);
	else
		return (check(m + 1, p));
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherewise 0.
 *
 * @n: integer
 *
 * Return: 1 if the the input integer is prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
