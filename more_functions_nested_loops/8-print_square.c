#include "main.h"

/**
 * print_square - Prints a square
 * @size: Size of the square
 *
 * Return: Nothing
 */
void print_square(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	row = 0;

	while (row < size)
	{
		col = 0;

		while (col < size)
		{
			_putchar('#');
			col++;
		}

		_putchar('\n');
		row++;
	}
}
