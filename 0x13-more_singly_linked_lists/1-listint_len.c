#include "lists.h"

/**
 * listint_len - return elemts number in a linked list
 *
 * @h: pointer of headlist
 *
 * Return: nodes number
 */

size_t listint_len(const listint_t *h)
{
	size_t deno = 0;

	while (h)
	{
		deno++;
		h = h->next;
	}
	return (deno);
}
