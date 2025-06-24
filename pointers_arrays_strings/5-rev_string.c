#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 *
 * This function takes a string and reverses its characters in place,
 * modifying the original string.
 */

void rev_string(char *s)
{
	char tmp;
	int len = 0;
	int start = 0;
	int end;

	while (s[len] != '\0')
		len++;

	end = len - 1;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;

		start++;
		end--;
	}
}
