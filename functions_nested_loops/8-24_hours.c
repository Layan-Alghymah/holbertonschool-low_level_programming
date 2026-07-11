#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int hours;
	int min;

	hours = 0;

	while (hours <= 23)
	{
		min = 0;

		while (min <= 59)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

			min++;
		}

		hours++;
	}
}
