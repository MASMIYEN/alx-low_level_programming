#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at particular pos
 *
 * @head: pointer of the head node
 * @idx: list index to insert the node at
 * @n: int to be added as element
 *
 * Return: node address on success || NULL on fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int idex;
	listint_t *nv_node, *ac_node;

	if (head == NULL)
		return (NULL);

	nv_node = malloc(sizeof(listint_t));
	if (nv_node == NULL)
		return (NULL);

	nv_node->n = n;
	nv_node->next = NULL;

	ac_node = *head;

	if (idx == 0)
	{
		nv_node->next = *head;
		*head = nv_node;
		return (nv_node);
	}

	for (idex = 0; ac_node != NULL && idex < idx - 1; idex++)
	{
		ac_node = ac_node->next;
	}

	if (ac_node == NULL)
	{
		free(nv_node);
		return (NULL);
	}

	nv_node->next = ac_node->next;
	ac_node->next = nv_node;

	return (nv_node);
}
