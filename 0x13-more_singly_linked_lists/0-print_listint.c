#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: head of linklist node
 *
 * Return: the number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 1;

	printf("%i\n", h->n);

	if (h->next != NULL)
	{
		count = count + print_listint(h->next);
	}

	return count;
}
