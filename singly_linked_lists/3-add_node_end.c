#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	if (head != NULL && str != NULL)
	{
		list_t *new_node;
		list_t *temp = *head;
		unsigned int len = 0;

		while (str[len] != '\0')
			len++;

		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = len;
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;

		return (new_node);
	}
	return (NULL);
}
