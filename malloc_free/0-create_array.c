#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and initializes it
 * @size : number of letters stored
 * @c : char to store
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A;

	if (size == 0)
	{
		return (NULL);
	}

	A = malloc(sizeof(*A) * size);

	if (A == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		A[i] = c;
	}
		return (A);
}
