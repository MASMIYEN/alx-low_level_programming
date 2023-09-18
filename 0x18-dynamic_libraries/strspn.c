#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept : segment of s
 *
 * Return: number of bytes in s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] != accept[j])
		{
			break;
		}
	}
	return (i);
}
