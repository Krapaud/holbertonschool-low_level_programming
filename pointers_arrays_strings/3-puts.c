#include "main.h"
#include <stdio.h>

void _puts(char *str)
{
	int len = 0;

	while(str[len] != '\0')
	len++;

	_putchar(*str);
	_putchar('\n');
}
