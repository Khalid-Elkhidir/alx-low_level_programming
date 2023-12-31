#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: the head of the list
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}

	if (head->next != NULL)
	{
		free_listint(head->next);
	}

	free(head);

}
