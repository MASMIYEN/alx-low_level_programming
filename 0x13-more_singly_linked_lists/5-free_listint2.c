#include "lists.h"

/**
 * free_listint2 - freedom for list
 *
 * @head: pointer of head node
 *
 * Return: again its a void function duuh
 */

void free_listint2(listint_t **head)
{
	listint_t *act, *rid;

	if (head != NULL)
	{
		act = *head;

		while ((rid = act) != NULL)
		{
			act = act->next;
			free(rid);
		}
		*head = NULL;
	}
}
