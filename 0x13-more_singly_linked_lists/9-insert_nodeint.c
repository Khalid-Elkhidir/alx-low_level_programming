#include <stdlib.h>
#include "list.h"

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *before, *next, node;

	if (*head == NULL)
	{
		return (NULL);
	}

	before = get_nodeint_at_index(*head, index - 1);
	next = get_nodeint_at_index(*head, index);

	if (before == NULL || next == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = next;
	before->next = node;

	return (node);
}
