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

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before, *node;

	if (head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		if (*head == NULL)
		{
			return (-1);
		}

		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	before = get_nodeint_at_index(*head, index - 1);
	node = get_nodeint_at_index(*head, index);

	if (temp == NULL)
	{
		return (-1);
	}

	before->next = node->next;
	free(node);

	return (node);
}
