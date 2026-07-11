#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	digit = '0';

	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}

	digit = 'a';

	while (digit <= 'f')
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
