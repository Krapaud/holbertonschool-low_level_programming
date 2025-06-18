#include <stdio.h>
#include "main.h"
/**
* print_alphabet - Prints the lowercase alphabet followed by a newline
*
* Description: Uses _putchar to print each letter from a to z
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
