#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the dlistint_t list
 *
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head->prev);
		if (head->next == NULL)
		{
			free(head);
			break;
		}
		head = head->next;
	}
}
