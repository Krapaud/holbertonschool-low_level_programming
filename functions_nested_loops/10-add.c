#include "main.h"

/**
 * add - Adds two integers and returns the result
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int add(int a, int b)
{
	int sum = a + b;

	if (sum >= 10)
	{
	_putchar((sum / 10) + '0');
	}
	_putchar((sum % 10) + '0');
	_putchar('\n');

	return (sum);
}
