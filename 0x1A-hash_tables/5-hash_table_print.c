#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			j = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
