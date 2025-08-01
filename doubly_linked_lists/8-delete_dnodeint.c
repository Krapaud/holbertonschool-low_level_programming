#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * delete_dnodeint_at_index - deletes the node
 * at index of a dlistint_t linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (head == NULL)
	return (-1);

	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}

	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}

	if (*head == temp)
	{
		*head = temp->next;
	}
	free(temp);
	return (1);
}
