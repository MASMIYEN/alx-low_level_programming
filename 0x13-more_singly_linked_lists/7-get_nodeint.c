#include "lists.h"

/**
 * get_nodeint_at_index - obtain node from linked list
 *
 * @head: pointer of head node
 * @index: list index
 *
 * Return: head node on success || NULL on fail
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m;

	for (m = 0; m < index && head != NULL; m++)
	head = head->next;

	return (head);
}
