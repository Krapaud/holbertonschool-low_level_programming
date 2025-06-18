#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - Prints the lowercase alphabet x 10
*
* Description: Uses _putchar to print each letter from a to z
* on 10 lines
*/
void print_alphabet_x10(void)
{
	char letter;
	int line = 0;

	while (line < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		line++;
	}
}
