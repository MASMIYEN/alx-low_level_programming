#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s : input string to convert
 *
 * Return: integer conversion of the string
 */
int _atoi(char *s)
{
	unsigned int i = 0;
	unsigned int value = 0;
	int sign = 1;
	unsigned int digit = 0;
	unsigned int next = 1;

	while (s[i] != '\0')
	{
		next = i + 1;

		if (s[i] == '-')
		{
			sign = sign * -1;
			i++;
		}
		else if (s[i] == '+')
		{
			sign = sign * 1;
			i++;
		}
		else if (s[i] <= '9' && s[i] >= '0')
		{
			digit = s[i] - '0';
			value = (value * 10) + digit;
			if (s[next] <= '9' && s[next] >= '0')
			{
				i++;
			}
			else
			{
				break;
			}
		}
		else
		{
			i++;
		}
	}
		return (value * sign);
}
