#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *temp, *current;

	if (ht == NULL)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		while (temp != NULL)
		{
			current = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = current;
		}
	}
	free(ht->array);
	free(ht);
}
