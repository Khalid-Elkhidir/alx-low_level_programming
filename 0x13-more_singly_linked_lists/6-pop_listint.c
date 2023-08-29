#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	listint_t *node;

	node  = (*head)->next;
	free(*head);
	*head = node;

	return ((*head)->n);
}
