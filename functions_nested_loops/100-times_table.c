#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of the times table to print (0 <= n <= 15)
 */
void print_times_table(int n)
{
	int a, b, r;

	if (n < 0 || n > 15)
		return;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			r = a * b;
			if (b)
			{
				_putchar(',');
				_putchar(' ');
				if (r < 10)
					_putchar(' '), _putchar(' ');
				else if (r < 100)
					_putchar(' ');
			}
			if (r >= 100)
				_putchar((r / 100) + '0');
			if (r >= 10)
				_putchar(((r / 10) % 10) + '0');
			else if (r >= 100)
				_putchar('0');
			if (r >= 10)
				_putchar((r % 10) + '0');
			else
				_putchar(r + '0');
		}
		_putchar('\n');
	}
}
