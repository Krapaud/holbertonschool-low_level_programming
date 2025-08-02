#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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
	char *str;
	hash_node_t *node;

	if (!ht || !key)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	if (value)
		str = strdup(value);
	else
		str = NULL;

	node = ht->array[idx];

	if (!node)
		node = new_node(NULL);

	if (node->key)
	{
		ht->array[idx] = update_node(node, key, str);
		return (1);
	}
	node->key = strdup(key);
	node->value = str;
	node->next = NULL;

	ht->array[idx] = node;
	return (1);
}
