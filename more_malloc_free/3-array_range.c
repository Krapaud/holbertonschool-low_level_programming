#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	return (NULL);

	for (i = min; i <= max; i++)
	arr[i] = i;

	return (arr);
}
