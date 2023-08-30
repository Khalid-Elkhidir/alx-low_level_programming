#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	int value;

	value = 0;

	if (*head == NULL)
	{
		return (value);
	}

	value = (*head)->n;
	free(*head);

	return (value);
}
