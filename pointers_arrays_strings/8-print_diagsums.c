#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows/columns)
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int result1 = 0;
	int result2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			result1 += a[i * size + i];

			if ((i + j) == (size - 1))
			result2 += a[i * size + (size - i - 1)];
		}
	}
	//*printf("%d, %d\n", result1, result2);
}
