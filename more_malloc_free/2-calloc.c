#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if it fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;
	unsigned int i;

	arr = malloc(nmemb * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
