#include "lists.h"

/**
 * list_len - obtain nodes number
 *
 * @h: pointer of head node
 *
 * Return: nodes number
 */

size_t list_len(const list_t *h)
{
	size_t node_calc = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		node_calc++;
	}
	return (node_calc);
}
