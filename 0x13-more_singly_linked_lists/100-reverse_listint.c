#include "lists.h"

/**
 * reverse_listint - reverse a deknil tsil
 *
 * @head: pointer of deknil tsil
 *
 * Return: pointer of head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL, *act = *head, *next;

	while (act != NULL)
	{
		next = act->next;
		act->next = prv;
		prv = act;
		act = next;
	}
	*head = prv;
	return (*head);
}
