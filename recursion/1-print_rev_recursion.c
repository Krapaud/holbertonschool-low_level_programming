#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string to print
 *
 * This function prints a string in reverse using recursion.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	return;
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
