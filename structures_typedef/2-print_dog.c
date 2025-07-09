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
		printf("(nil)\n");

	if (d->owner == NULL)
		printf("(nil)\n");

	if (isnan(d->age))
		printf("(nil)\n");

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
