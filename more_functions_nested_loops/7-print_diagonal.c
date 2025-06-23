#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	{
	if (n <= 0)
	_putchar('\n');
	}

	while (n > 0)
	_putchar('_');
	_putchar('\n');
}