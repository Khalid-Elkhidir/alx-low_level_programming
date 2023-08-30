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
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *node;

	if (head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		if (*head == NULL)
		{
			return (NULL);
		}

		node = malloc(sizeof(listint_t));
		node->n = n;
		node->next = *head;
		*head = node;
		return (node);
	}

	temp = get_nodeint_at_index(*head, idx - 1);

	if (temp == NULL)
	{
		return (NULL);
	}

	node = malloc(sizeof(listint_t));
	node->n = n;
	node->next = temp->next;
	temp->next = node;

	return (node);
}
