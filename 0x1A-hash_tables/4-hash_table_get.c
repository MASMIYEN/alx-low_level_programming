#include "hash_tables.h"
/**
 * hash_table_get - gets value associated to key
 * @ht: the hash table
 * @key: the key for the value
 *
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (NULL);
	if (key == NULL || strlen(key) == 0)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
