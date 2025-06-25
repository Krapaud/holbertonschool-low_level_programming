#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints the second half of a string
 * @str: the string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int n;
	int len2;

	while (str[len] != '\0')
		len++;
	len2 = len;

	n = (len + 1) / 2;

	while (n < len2)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
