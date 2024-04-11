#include "hash_tables.h"

/**
 * key_index - gives the index of the key
 * @key: is the given key
 * @size: is the size of the array of the hash table
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);
	hash_value = hash_djb2(key);
	return (hash_value % size);
}
