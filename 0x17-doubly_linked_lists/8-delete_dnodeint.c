#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: address of the list
 * @index: index of the node, starts at 0
 *
 * Return: 1 if succeeded or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *where = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = where->next;
		free(where);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	while (where)
	{
		if (i == index)
			break;

		where = where->next;
		i++;

		if (where == NULL)
			return (-1);
	}

	if (where->next == NULL)
		where->prev->next = NULL;
	else
	{
		where->next->prev = where->prev;
		where->prev->next = where->next;
	}
	free(where);
	return (1);
}
