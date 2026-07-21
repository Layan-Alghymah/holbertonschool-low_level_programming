#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of values from min to max
 * @min: smallest value
 * @max: largest value
 *
 * Return: pointer to the new array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int size, *arr, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
