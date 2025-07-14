#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the function that compares values.
 *
 * This function checks if the array, size, and cmp pointer are not NULL,
 * and then applies the cmp function to each element of the array.
 * It returns the index of the first element for which cmp does not return 0,
 * or -1 if no such element is found or if size is less than or equal to 0.
 *
 * Return: The index of the first matching element, or -1 if not found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
