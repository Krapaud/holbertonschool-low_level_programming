#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *cpy;
	int len;
	int i;

	if (str == NULL)
	return (NULL);

	len = strlen(str);
	cpy = malloc(sizeof(*cpy) * (len + 1));
	if (cpy == NULL)
	return (NULL);

	for (i = 0; i <= len; i++)
	{
		cpy[i] = str[i];
		cpy[len] = '\0';
	}
	return (cpy);
}
