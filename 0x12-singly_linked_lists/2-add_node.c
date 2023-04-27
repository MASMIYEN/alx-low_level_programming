#include "lists.h"

/**
 * add_node - add node at header of linked list
 *
 * @head: pointer of the node header
 * @str: string to be added in the linked list
 *
 * Return: head of the node || NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *insert_node;
	size_t str_length;

	str_length = 0;

	if (str == NULL)
		str_length = 0;

	while (str[str_length] != '\0')
		str_length++;

	insert_node = malloc(sizeof(list_t));
	if (insert_node == NULL)
		return (NULL);
	if (*head == NULL)
		insert_node->next = NULL;
	else
		insert_node->next = *head;

	insert_node->str = strdup(str);
	insert_node->len = str_length;
	*head = insert_node;

	return (*head);
}
