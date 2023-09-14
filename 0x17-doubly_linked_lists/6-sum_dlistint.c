#include "lists.h"
/**
 * sum_dlistint - calculates sum of all data n of a dlistint_t linked list
 * @head: starting node of the dlistint_t linked list
 *
 * Return: the sum of all data n of list or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
