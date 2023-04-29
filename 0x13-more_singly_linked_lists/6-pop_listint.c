#include "lists.h"

/**
 * pop_listint - remove node's head
 *
 * @head: pointer of list head
 *
 * Return: head node after delete
 */
int pop_listint(listint_t **head)
{
	listint_t *dino, *next;
	int head_node;

	if (*head == NULL)
		return (0);

	dino = *head;

	next = dino->next;

	head_node = dino->n;

	*head = next;

	free(dino);

	return (head_node);
}
