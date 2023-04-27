#include "lists.h"

/**
 * add_node_end - add node to tail of linked list
 *
 * @head: pointer of first node
 * @str: string to create
 *
 * Return: head address of linked list || NULL on fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *create_node, *jeff;
	size_t str_length;

	str_length = 0;

	if (str == NULL)
		str_length = 0;
	while (str[str_length] != '\0')
		str_length++;

	create_node = malloc(sizeof(list_t));
	if (create_node == NULL)
		return (NULL);

	create_node->str = strdup(str);
	create_node->len = str_length;
	create_node->next = NULL;

	jeff = *head;

	if (jeff == NULL)
		*head = create_node;
	else
	{
		while (jeff->next != NULL)
			jeff = jeff->next;
		jeff->next = create_node;
	}
	return (*head);
}
