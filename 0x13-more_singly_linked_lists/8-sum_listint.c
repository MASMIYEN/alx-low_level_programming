#include "lists.h"

/**
 * sum_listint - retun sum of nodes
 *
 * @head: point of head node
 *
 * Return: sum of all nodes
 */
int sum_listint(listint_t *head)
{
	int sum_node = 0;

	while (head != NULL)
	{
		sum_node += head->n;
		head = head->next;
	}
	return (sum_node);
}
