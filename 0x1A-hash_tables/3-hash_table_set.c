#include "hash_tables.h"
/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: Key
 * @value: the value associated with the key.
 *
 * Return: 1 on success or 0 on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = malloc(sizeof(hash_node_t));
	if (current == NULL)
		return (0);
	current->key = strdup(key);
	
	if (*value == '\0')
		current->value = '\0';
	else
		current->value = strdup(value);
	current->next = ht->array[index];
	ht->array[index] = current;
	return (1);
}
