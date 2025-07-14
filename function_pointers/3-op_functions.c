#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the addition.
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts the second integer from the first.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the subtraction.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides the first integer by the second.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the division.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the modulus of the first integer by the second.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the modulus operation.
 */
int op_mod(int a, int b)
{
	return (a % b);
}