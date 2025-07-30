#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * sum_dlistint - calculates the sum of all the data (n) in a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 *
 * Return: the sum of all the integers in the list, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
