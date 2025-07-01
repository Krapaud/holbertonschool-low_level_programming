#include "main.h"
#include <stdio.h>

void _puts_recursion(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	_putchar('\n');
}
