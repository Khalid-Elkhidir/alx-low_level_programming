#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 *
 * @h: head pointer
 *
 * Return: the number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;

	if (h != NULL)
	{
		count++;
		count = count + listint_len(h->next);
	}

	return (count);
}
