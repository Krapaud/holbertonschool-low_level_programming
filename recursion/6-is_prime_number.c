#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 * @d: The current divisor
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_rec(int n, int d);

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_rec(n, 2));
}
/**
 * is_prime_rec - Helper function to check if n is prime
 * @n: The number to check
 * @d: The current divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_rec(int n, int d)
{
	if (d * d > n)
		return (1);

	if (n % d == 0)
		return (0);

	return (is_prime_rec(n, d + 1));
}
