#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[b] != '\0')
	{
		b++;
	}
	
	while (src[a] != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}

	dest[b] = '\0';

	return (dest);
}
