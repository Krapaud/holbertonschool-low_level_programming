#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * in a doubly linked list.
 * @h: Double pointer to the head of the list.
 * @idx: Index at which to insert the new node.
 * @n: Data to insert in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	{
		new_node->n = n;
		new_node->next = NULL;
		return (new_node);
	}

	if (idx == 0)
	return (*h);

	if (idx == 1)
	{
		new_node = add_dnodeint(h, n);
		new_node->next = *h;
	}

	for (i = 1; i < idx - 1 && current != NULL; i++)
	{
		new_node->next = current->next;
		current->next = new_node;
	}
	return (*h);
}
