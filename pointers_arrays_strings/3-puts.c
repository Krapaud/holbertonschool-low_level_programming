#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: the string to print
 *
 * Return: void
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
