#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value pair.
 * @key: The key, which cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node, *new;
	char *val_cpy, *key_cpy;

	if (!ht || !key || key[0] == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = value ? strdup(value) : NULL;
			return (1);
		}
		node = node->next;
	}

	key_cpy = strdup(key);
	val_cpy = value ? strdup(value) : NULL;
	if (!key_cpy || (value && !val_cpy))
	{
		free(key_cpy);
		free(val_cpy);
		return (0);
	}

	new = malloc (sizeof (hash_node_t));
	if (!new)
	{
		free(key_cpy);
		free(val_cpy);
		return (0);
	}
	new->key = key_cpy;
	new->value = val_cpy;
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
