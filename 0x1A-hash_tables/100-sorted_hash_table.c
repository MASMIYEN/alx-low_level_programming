#include "hash_tables.h"
/**
 * shash_table_create - creates sorted hash table
 * @size: size of hash table
 *
 * Return: pointer to new sorted hash table or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}
/**
 * shash_table_set - adds new element to sorted hash table
 * @ht: the hash table
 * @key: key to add, cannot be empty
 * @value: value to insert with the key
 *
 * Return: success 1, failure 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	shash_node_t *tmp, *new;
	char *nvalue;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	nvalue = strdup(value);
	if (nvalue == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = nvalue;
			return (1);
		}
		tmp = tmp->snext;
	}
	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(nvalue);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(nvalue);
		free(new);
		return (0);
	}
	new->value = nvalue;
	new->next = ht->array[i];
	ht->array[i] = new;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
	return (1);
}
/**
 * shash_table_get - gets value of a key in sorted hash table
 * @ht: the hash table
 * @key: key of the value to get
 *
 * Return: value associated with key or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	tmp = ht->shead;
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;
	if (tmp == NULL)
		return (NULL);
	else
		return (tmp->value);
}
/**
 * shash_table_print - prints sorted hash table
 * @ht: the hash table
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;
	tmp = ht->shead;
	printf("{");
	while (tmp != NULL)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		if (tmp != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints hash table in reverse order
 * @ht: the hqsh table
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;
	tmp = ht->stail;
	printf("{");
	while (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		if (tmp)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: the hash table to delete
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *current;

	if (ht == NULL)
		return;
	current = ht->shead;
	while (current != NULL)
	{
		tmp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = tmp;
	}
	free(ht->array);
	free(ht);
}
