#include "main.h"
#include <stdio.h>
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void
 */

void times_table(void)
{
	int a, b;
	for (a = 0; a < 10; a++)

	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
				printf("%d", a * b);
			else
				printf(", %2d", a * b);
		}
		printf("\n");
	}
}
