#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the byte to fill the memory area with
 * @n: the number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
