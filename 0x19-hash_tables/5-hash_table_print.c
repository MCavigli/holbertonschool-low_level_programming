#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	int flag = 0;
	unsigned long int idx = 0;
	hash_node_t *ptr = NULL;

	if (!ht)
		return;
	printf("{");
	while (idx < ht->size)
	{
		ptr = ht->array[idx];
		if (ptr == NULL)
		{
			idx++;
			continue;
		}
		if (flag == 0)
		{
			printf("\'%s\': \'%s\'", ptr->key, ptr->value);
			flag++;
		}
		else
			printf(", \'%s\': \'%s\'", ptr->key, ptr->value);
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
			printf(", \'%s\': \'%s\'", ptr->key, ptr->value);
		}
		idx++;
	}
	printf("}\n");
}
