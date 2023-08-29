#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node at beginning of a listint_t list.
 *
 * @head: head of double pointer
 * @n: int add the list
 * Return: NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	node->n = n;
	node->next = *head;

	head = &node;

	if ((*head)->n == n)
	{
		return (*head);
	}

	return (NULL);
}
