#include "hash_tables.h"

void delete_node(hash_node_t *);
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to the hash table to delete.
 * This function frees all the nodes in the hash table
 * and the array itself, then frees the hash table structure.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int idx = 0;

	while (idx < ht->size)
	{
		if (ht->array[idx])
		{
			node = ht->array[idx];
			delete_node(node);
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}

/**
 * delete_node - delete a linked list of hash nodes.
 * @node: pointer to the first node of the list.
 */
void delete_node(hash_node_t *node)
{
	hash_node_t *tmp;

	while (node)
	{
		tmp = node;
		free(node->key);
		if (node->value)
			free(node->value);
		node = node->next;
		free(tmp);
	}
}
