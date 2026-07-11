#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Number of backslashes to print
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int row;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	row = 0;

	while (row < n)
	{
		space = 0;

		while (space < row)
		{
			_putchar(' ');
			space++;
		}

		_putchar('\\');
		_putchar('\n');
		row++;
	}
}
