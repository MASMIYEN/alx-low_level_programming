#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end of dlistint_t list
 * @head: head of the dlistint_t to edit
 * @n: element of the node to add
 *
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}


	return (new);
}
