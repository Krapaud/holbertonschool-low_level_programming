#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added
 * @n: integer to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	new_node = add_dnodeint(h, n);

	if (idx == 1)
	{
		new_node = add_dnodeint(h, n);

		(*h)->prev = new_node;
	}
	else
	{
		temp = *h;
		for (i = 0; i < idx - 1; i++)
		{
			if (temp != NULL)
			temp = temp->next;
		}
	}
	if (temp != NULL)
	{
		new_node->next = temp->next;
		new_node->prev = temp;
		temp->next = new_node;
	}
	return (new_node);
}

