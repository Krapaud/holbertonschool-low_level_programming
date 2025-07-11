#include "main.h"
#include <stdio.h>

void print_alphabet_x10(void)
{
	char letter;
	int line = 0;

	while (line <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	line++;
	}
}
