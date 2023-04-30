#include "lists.h"

/**
 * print_listint_safe - print linked list safe
 *
 * @head: pointer of head node
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	size_t m;
	const listint_t *act = head;
	const listint_t *exi[1024];

	while (act != NULL)
	{
		for (m = 0; m < count; m++)
		{
			if (act == exi[m])
			{
				printf("-> [%p] %d\n", (void *) act, act->n);
				return (count);
			}
		}
		printf("[%p] %d\n", (void *) act, act->n);
		exi[count] = act;
		count++;

		act = act->next;
	}
	return (count);
}

