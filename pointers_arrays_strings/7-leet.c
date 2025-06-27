#include "main.h"
#include <stdio.h>

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
