#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array to iterate over.
 * @size: The number of elements in the array.
 * @action: Pointer to the function to execute on each element.
 *
 * This function checks if the array and action pointer are not NULL,
 * and then applies the action function to each element of the array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL && size > 0)

	for (i = 0; i < size; i++)
	action(array[i]);
}
