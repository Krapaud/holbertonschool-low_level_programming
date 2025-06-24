#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (len--; len >= 0 ; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
