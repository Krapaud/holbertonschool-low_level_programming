#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Prints the alphabet in lowercase
 * followed by a new line.
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
