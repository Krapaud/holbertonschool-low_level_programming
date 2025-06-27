#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337 (leet) speak.
 * @s: the string to encode.
 *
 * Return: the encoded string.
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char alph[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		for (; alph[j] != '\0'; j++)
		{
			if (s[i] == alph[j])
				s[i] = replace[j];
		}
		i++;
	}
	return (s);
}
