#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings separated by a string
 * @separator: string printed between strings
 * @n: number of stings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *str;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
		printf("%s", separator);
		}

	va_end(arg);
	printf("\n");
}
