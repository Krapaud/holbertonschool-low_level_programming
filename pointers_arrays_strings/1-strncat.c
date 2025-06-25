#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings up to n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concatenate from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[b] != '\0')
	{
		b++;
	}

	while (src[a] != '\0' && a < n)
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
