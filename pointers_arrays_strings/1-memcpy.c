#include "main.h"
#include <stdio.h>
/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
