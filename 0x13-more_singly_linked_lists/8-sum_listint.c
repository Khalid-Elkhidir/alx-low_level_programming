#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	sum = head->n;

	sum += sum_listint(head->next);

	return (sum);
}
