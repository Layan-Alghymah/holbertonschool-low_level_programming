#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Size of the triangle
 *
 * Return: Nothing
 */
void print_triangle(int size)
{
	int row;
	int space;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	row = 0;

	while (row < size)
	{
		space = 0;

		while (space < size - row - 1)
		{
			_putchar(' ');
			space++;
		}

		hash = 0;

		while (hash <= row)
		{
			_putchar('#');
			hash++;
		}

		_putchar('\n');
		row++;
	}
}
