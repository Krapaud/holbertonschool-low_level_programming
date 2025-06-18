#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic
 * @c: The character to check if it's lowercase
 * Return: 1 if c is a lowercase letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= '32' && c <= '122')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
