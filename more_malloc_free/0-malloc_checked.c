#include "main.h"
#include "stdlib.h"

void *malloc_checked(unsigned int b)
{
int *i;

	i = malloc(sizeof(b));
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
