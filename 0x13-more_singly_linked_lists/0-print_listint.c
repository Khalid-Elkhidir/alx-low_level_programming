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

	count = 0;

	if (h != NULL)
	{
		count++;
		printf("%d\n", h->n);	
		count = count + print_listint(h->next);
	}

	return count;
}
