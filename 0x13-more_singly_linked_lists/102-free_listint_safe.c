#include "lists.h"

/**
 * free_listint_safe - free listint (free)
 *
 * @h: pointer of head node
 *
 * Return: list's size
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *act, *next;
	size_t count = 0;

	if (*h == NULL || h == NULL)
		return (0);

	act = *h;
	while (act != NULL)
	{
		count++;
		next = act->next;
		free(act);
		if (next >= act)
			break;
		act = next;
	}
	*h = NULL;
	return (count);
}
