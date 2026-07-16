#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the integer found in the string, or 0 if no number is found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int number = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && found_digit == 0)
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			number = number * 10 - (s[i] - '0');
		}
		else if (found_digit == 1)
		{
			break;
		}

		i++;
	}

	if (sign == 1)
		return (-number);

	return (number);
}
