#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	int comma = 1;
	hash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		while (current != NULL)
		{
			if (comma == 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			comma = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
