#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: address of the list
 * @idx: index of the list, starts at 0
 * @n: data n of the new node
 *
 * Return: address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *where;
	unsigned int i = 1;

	if (idx == 0)
		return (add_dnodeint(h, n));

	where = *h;

	while (where)
	{
		if (i == idx)
			break;
		where = where->next;
		i++;
		if (i > idx || where == NULL)
			return (NULL);
	}

	if (where->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);


	new->n = n;
	new->prev = where;
	new->next = where->next;
	where->next->prev = new;
	where->next = new;


	return (new);
}
