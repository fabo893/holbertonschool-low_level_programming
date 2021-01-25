#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *node;

	for (idx = 0; idx < (*ht).size; idx++)
	{
		if ((*ht).array[idx] != NULL)
		{
			for (;(*ht).array[idx] != NULL;)
			{
				node = ht->array[idx]->next;
				free(ht->array[idx]->key);
				free(ht->array[idx]->value);
				free(ht->array[idx]);
				(*ht).array[idx] = node;
			}
		}
	}
	free((*ht).array);
	(*ht).array = NULL;
	(*ht).size = 0;
	free(ht);
}
