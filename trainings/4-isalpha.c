#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check if it's alphabetic
 * Return: 1 if c is an alphabetic letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
