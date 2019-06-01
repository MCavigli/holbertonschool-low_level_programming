#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *ptr;
	hash_node_t *prev;

	if (!ht)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		ptr = ht->array[idx];
		prev = ht->array[idx];
		if (ptr == NULL)
			continue;
		while (ptr != NULL)
		{
			free(ptr->key);
			free(ptr->value);
			ptr = ptr->next;
			free(prev);
			prev = ptr;
		}
	}
	free(ht->array);
	free(ht);
}
