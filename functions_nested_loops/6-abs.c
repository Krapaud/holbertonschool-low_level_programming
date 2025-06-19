#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value
 * @n: The integer to check
 * Return: The absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
