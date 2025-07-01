#include "main.h"
#include <stdio.h>

void _puts_recursion(char *s)
{
	{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}
	_putchar('\n');
}
}
