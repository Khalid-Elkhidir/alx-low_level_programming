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
	listint_t *node;
	int value;

	if (*head == NULL)
	{
		return (0);
	}

	node = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = node;

	return (value);
}
