#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints a string between numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int a;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(arg, int);
		printf("%d", a);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
