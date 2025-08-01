#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_list - frees a singly linked list
 * @head: pointer to the head of the list
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
