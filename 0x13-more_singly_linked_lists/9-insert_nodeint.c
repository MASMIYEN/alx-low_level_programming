#include "lists.h"

/**
 * insert_node_at_index - insert a node at particular pos
 *
 * @head: pointer of the head node
 * @idx: list index to insert the node at
 * @n: int to be added as element
 *
 * Return: node address on success || NULL on fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
{
	unsigned int idex;
	listint_t nv_node, ac_node;

	ac_node = *head;

	nv_node = malloc(sizeof(listint_t));
	if (idex != 0 && *head == NULL)
		return (NULL);
	if (nv_node == NUL)
		return (NULL);

	nv_node->n = n;

	for (idex = 0; head != NULL && idex < idx - 1; idex++)
	{
		act_node = act_node->next;
		if (act_node == NULL)
			return (NULL);
	}
	if (act_node->next)
		nv_node->next = act_node->next;
		act_node->next = nv_node;
	
	else if (idx == 0)
		nv_node->next = *head;
		*head = nv_node;

	else
		nv_node->next = NULL;
		act_node->next = nv_node;

	return(nv_node);
}
