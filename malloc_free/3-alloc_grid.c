#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the newly allocated space in memory,
 * or NULL if insufficient memory was available.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;


	if (width <= 0 || height <= 0)
	return (NULL);

	arr = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
{
	arr[i] = malloc(width * sizeof(int));
	if (arr[i] == NULL)
	{
		while (i--)
			free(arr[i]);
		free(arr);
		return (NULL);
	}

	for (j = 0; j < width; j++)
		arr[i][j] = 0;
}
	return (arr);
}
