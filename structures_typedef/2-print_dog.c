#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
 * print_dog - Prints the details of a dog structure
 * @d: Pointer to the dog structure to print
 *
 * If any member is NULL or age is NaN, it prints "nil" for that member.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (isnan(d->age))
		printf("Age: (nil)\n");
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
