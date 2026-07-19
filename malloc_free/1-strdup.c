#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * str: the string to be allocated
 *
 * Return: returns a pointer to the duplicated string, or NULL of fail
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *copy;

	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
		i++;

	copy = malloc(sizeof(*copy) * (i));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i ; j++)
	{
		copy[j] = str[j];
	}

	return (copy);
}
