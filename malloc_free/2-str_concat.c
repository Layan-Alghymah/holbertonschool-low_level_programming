#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Returns a pointer
 * @s1: first string
 * @s2: second string
 *
 * Return: returns an empty string if passed, NULL if fialled
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *length;

	len1, len2, i, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	length = malloc(sizeof(*length) * (len1 + len2 + 1));

	if (length == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1 ; i++)
	{
		length[i] = s1[i];
	}

	for (j = 0; j < s2[len2]; j++)
	{
		length[len1 + j] = s2[len2 + j];
	}
	length[len1 + len2] = '\0';
}
