#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table, NULL if something goes
 * wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if (!size || size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;

	ht->array = calloc(sizeof(hash_node_t *), size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
