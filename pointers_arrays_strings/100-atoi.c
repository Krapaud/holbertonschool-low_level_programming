#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted
 *
 * Return: the integer value of the string
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i + 1] >= '0' && s[i + 1] <= '9')
			break;
		i++;
	}

	i = 0;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			result = result * 10 + (s[i] - '0');
		}
		if ((s[i + 1] < '0' || s[i + 1] > '9') && found_digit == 1)
			break;
		i++;
	}

	if (!found_digit)
		return (0);

	return (result * sign);
}
