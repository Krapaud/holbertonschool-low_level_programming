#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	if (head != NULL)
	{
		dlistint_t *new_node;
		dlistint_t *temp = *head;

		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
		new_node->n = n;

		return (new_node);
	}
	return (NULL);
}
