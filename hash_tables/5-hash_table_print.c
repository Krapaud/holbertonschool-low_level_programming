#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * This function prints the key/value pairs in the hash table in the format:
 * {'key1': 'value1', 'key2': 'value2', ...}
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first = 1;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
