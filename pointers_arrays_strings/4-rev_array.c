#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
