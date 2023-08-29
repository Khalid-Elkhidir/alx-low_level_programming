#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at end of a listint_t list.
 *
 * @head: head of double pointer
 * @n: int add the list
 * Return: NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t node;

	if (head == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if ((*head)->next != NULL)
	{
		add_nodeint_end((*head)->next, n);
		free(node);
	}
	else
	{
		(*head)->next = node;
	}

	return (node);
}
