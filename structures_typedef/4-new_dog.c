#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - Creates a new dog structure
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog structure,
 *         or NULL if memory allocation fails or if input pointers are NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dt;
	int i;
	int name_len = 0;
	int owner_len = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[name_len])
	name_len++;
	while (owner[owner_len])
	owner_len++;
	dt = malloc(sizeof(dog_t));
	if (dt == NULL)
	{
		return (NULL);
	}
	dt->name = malloc(name_len + 1);
	if (dt->name == NULL)
	{
		free(dt);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		dt->name[i] = name[i];

	dt->owner = malloc(owner_len + 1);
	if (dt->owner == NULL)
	{
		free(dt->name);
		free(dt);
		return (NULL);
	}
	for (i = 0; i <= owner_len; i++)
		dt->owner[i] = owner[i];
	dt->age = age;

	return (dt);
}
