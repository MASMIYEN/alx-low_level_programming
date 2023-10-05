#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: sizoe of the array
 *
 * Return: pointer to new table or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_tab = NULL;

	if (size == 0)
		return (NULL);
	new_tab = malloc(sizeof(hash_table_t));
	if (new_tab == NULL)
		return (NULL);
	new_tab->size = size;
	new_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (new_tab->array == NULL)
		return (NULL);
	return (new_tab);
}
