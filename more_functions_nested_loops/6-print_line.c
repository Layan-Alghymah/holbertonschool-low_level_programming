#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: Number of underscores to print
 *
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}

	_putchar('\n');
}
