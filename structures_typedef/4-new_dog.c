#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog structure, or NULL if it fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dt;
	char *name_copy, *owner_copy;

	dt = malloc(sizeof(dog_t));
	if (dt == NULL)
	{
		return (NULL);
	}
	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(dt);
		return (NULL);
	}
	strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (owner == NULL)
	{
		free(name_copy);
		free(dt);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	dt->name = name_copy;
	dt->age = age;
	dt->owner = owner_copy;

	return (dt);
}
