#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: the name to be printe
 * @f: the functtion of choice
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	return;

	(*f)(name);
}

