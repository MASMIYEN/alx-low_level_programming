#include "lists.h"

/**
 * add_nodeint - adding node at head
 *
 * @head: pointer of head node
 * @n: const integer for the added node
 *
 * Return: element's adress || NULL on fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nouveau;

	nouveau = malloc(sizeof(listint_t));
	if (nouveau == NULL)
		return(NULL);

	nouveau->n = n;
	nouveau->next = *head;
	*head = nouveau;

	return (nouveau);
}
