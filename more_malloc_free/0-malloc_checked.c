#include "main.h"
#include "stdlib.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
