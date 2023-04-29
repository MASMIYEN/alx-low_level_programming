#include "lists.h"

/**
 * add_nodeint_end - adding new node at tail of list
 *
 * @head: pointer for head node
 * @n: const int to add to nnode
 *
 * Return: adress on success || NULL on fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nv_node, *jeff;

	nv_node = malloc(sizeof(listint_t));
	if (nv_node == NULL)
		return (NULL);

	jeff = *head;

	nv_node->n = n;
	nv_node->next = NULL;

	if (jeff == NULL)
		*head = nv_node;
	else
	{

		while (jeff->next != NULL)
			jeff = jeff->next;

		jeff->next = nv_node;
	}

		return (*head);

		free(nv_node);
}
