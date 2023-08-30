#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: pointer of the first node
 * @index: index is the index of the node
 *
 * Return: pointer of Index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
	{
		return (NULL);
	}

	if (index == 0)
	{
		return (head);
	}

	return (get_nodeint_at_index(head->next, --index));
}
