#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int row;
	int col;
	int n;

	row = 0;

	while (row <= 9)
	{
		col = 0;

		while (col <= 9)
		{
			n = row * col;

			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (n < 10)
					_putchar(' ');
			}

			if (n >= 10)
				_putchar((n / 10) + '0');

			_putchar((n % 10) + '0');

			col++;
		}

		_putchar('\n');
		row++;
	}
}
