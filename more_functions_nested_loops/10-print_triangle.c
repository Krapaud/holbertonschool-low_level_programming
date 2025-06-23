#include "main.h"
#include <stdio.h>

void
print_triangle (int size)

{
	int i, j, k;

	if (size <= 0) {
		_putchar ('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');
		for (k = 0; k < i + 1; k++)
			_putchar('#');
		_putchar('\n');
	}
}
