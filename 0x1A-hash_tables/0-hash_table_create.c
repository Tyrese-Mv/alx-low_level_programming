#include "hash_tables.h"
/**
 * hash_table_create - creates hash table
 * @size: size of the linked list node (array)
 *
 * Return: A pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create_table = NULL;
	unsigned long int index;

	if (size < 1)
		return (NULL);
	create_table = malloc(sizeof(hash_table_t));
	if (create_table == NULL)
		return (NULL);
	create_table->array = malloc(sizeof(hash_node_t *) * size);
	if (create_table->array == NULL)
	{
		free(create_table);
		return (NULL);
	}
	create_table->size = size;
	for (index = 0; index < size; index++)
		create_table->array[index] = NULL;
	return (create_table);
}
