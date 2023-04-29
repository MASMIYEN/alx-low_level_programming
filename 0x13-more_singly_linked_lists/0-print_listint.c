#include "lists.h"

/**
 * print_listint - a function to output all listint_t's elements
 *
 * @h: first node's pointer
 *
 * Return: node's number
 */

size_t print_listint(const listint_t *h)
{
	size_t node_num = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		node_num++;
		h = h->next;
	}
	printf("%d\n", h->n);

	return (node_num);
}
