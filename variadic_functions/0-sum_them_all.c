#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - find the sum of the list values
 * @n: number of values
 *
 * Return: returns the total sum, if n is zero return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;

	int sum;
	unsigned int i;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);
	return (sum);
}
