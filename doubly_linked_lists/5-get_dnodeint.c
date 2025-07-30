#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: the nth node, or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
	return (NULL);

	if (index == 0)
	return (head);

	return (get_dnodeint_at_index(head->next, index - 1));
}
