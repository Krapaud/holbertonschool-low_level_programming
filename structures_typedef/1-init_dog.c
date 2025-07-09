#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to the dog structure to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->owner = owner;
	d->age = age;
}
