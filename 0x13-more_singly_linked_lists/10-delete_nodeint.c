#include "lists.h"

/**
 * delete_nodeint_at_index - remove the node in linkedlist
 * in a specific index
 *
 * @head: pointer of the head node
 * @index: index to remove
 *
 * Return: 1 success || -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *act = NULL;
	listint_t *rep = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(rep);
		return (1);
	}

	while (m < index - 1)
	{
		if (!rep || !(rep->next))
			return (-1);
		rep = rep->next;
		m++;
	}

	act = rep->next;
	if (!act)
		return (-1);  /* index out of range */

	rep->next = act->next;
	free(act);

	return (1);
}
