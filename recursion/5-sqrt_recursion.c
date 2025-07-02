#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Calcule la racine carrée naturelle de n
 * @n: Le nombre dont on veut la racine
 *
 * Return: racine carrée naturelle ou -1 si elle n'existe pas
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);

	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 1));
}
/**
 * sqrt_helper - Fonction récursive d’aide pour trouver la racine
 * @n: Le nombre à tester
 * @guess: La valeur actuelle testée comme racine
 *
 * Return: racine carrée naturelle ou -1 si elle n'existe pas
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	return (guess);

	if (guess * guess > n)
	return (-1);

	else
	return (sqrt_helper(n, guess + 1));
}
