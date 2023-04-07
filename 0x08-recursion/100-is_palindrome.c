#include "main.h"

/**
 * isPalindrome - function to check string
 *
 * @string: string to check
 * @length: length of the string
 *
 * @m: int to increment with
 *
 * Return: 1 if the string is palindrome, Otherwise 0
 */
int isPalindrome(char *string, int length, int m)
{
	if (m < length && string[m] == string[length])
		return (isPalindrome(string, length - 1, m + 1));
	if (string[m] != string[length])
		return (0);
	return (1);
}
/**
 * _strlen_recursion - function to returns length of a string
 *
 * @s: string to check the length of
 *
 * Return: integer who displays the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * is_palindrome - a function that checks if the string is palindrome
 *
 * @s: string to be checked
 *
 * Return: 1 if string is plaindrome, Otherewise 2
 */
int is_palindrome(char *s)
{
	int m = 0;
	int length = _strlen_recursion(s) - 1;

	return (isPalindrome(s, length, m));
}
