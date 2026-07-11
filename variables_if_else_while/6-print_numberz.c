#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * without char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
