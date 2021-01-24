#include "hash_tables.h"

/**
 * *hash_table_get - retrieve a value associated with a key.
 * @ht: hash table
 * @key: key
 *
 * Return: pointer to char of the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int kidx, idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	kidx = key_index((unsigned char *)key, (*ht).size);
	node = (*ht).array[kidx];

	for (idx = 0; node != NULL; idx++)
	{
		if (strcmp(key, (*node).key) == 0)
			return ((*node).value);
		node = (*node).next;
	}
	return (NULL);
}
