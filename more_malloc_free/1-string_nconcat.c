#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * up to n bytes of the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated space in memory containing the
 * concatenated string, or NULL if it fails.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
	{
		cat = malloc(sizeof(*cat) * (len1 + len2 + 1));
	}
	else
	{
		cat = malloc(sizeof(*cat) * (len1 + n + 1));
		len2 = n;
	}
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		cat[i] = s1[i];

	for (j = 0; j < len2; j++)
	cat[i + j] = s2[j];

	cat[i + j] = '\0';
	return (cat);
}
