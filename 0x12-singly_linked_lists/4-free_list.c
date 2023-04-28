#include "lists.h"

/**
 * free_list - free list
 *
 * @head: pointer of the firts node
 *
 * Return: absolutly nothing
 */

void free_list(list_t *head)
{
	list_t *actual;

	while ((actual = head) != NULL)
	{
		head = head->next;
		free(actual->str);
		free(actual);
	}
}
