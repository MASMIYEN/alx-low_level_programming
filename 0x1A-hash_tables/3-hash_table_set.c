#include "hash_tables.h"
/**
 * hash_table_set - adds an element to hash table
 * @ht: the hash table to update
 * @key: the key, cannot be empty
 * @value: value associated with key
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node = NULL;
	hash_node_t *tmp = NULL;
	char *new;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);

	if (key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new = strdup(value);
			if (new == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new;
			return (1);
		}
		tmp = tmp->next;
	}
	node = new_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}

/**
 * new_node - make new hash node
 * @key: node key
 * @value: value associated with the key
 *
 * Return: pointer to new node or NULL
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;
	return (new);
}
