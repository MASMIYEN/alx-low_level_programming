#include "lists.h"
/**
 * dlistint_len - calculates the number of elements in a linked dlistint_t list
 * @h: head of the linked dlistint_t list
 *
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int el = 0;

	while (h)
	{
		h = h->next;
		el++;
	}
	return (el);
}
