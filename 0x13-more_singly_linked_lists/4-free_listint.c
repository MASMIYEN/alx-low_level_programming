#include "lists.h"

/**
 * free_listint - freedom of list
 *
 * @head: pointer for the head node
 *
 * Return: its a void function duuh
 */
void free_listint(listint_t *head)
{
	listint_t *jeff;

	while ((jeff = head) != NULL)
	{
		head = head->next;
		free(jeff);
	}
}
