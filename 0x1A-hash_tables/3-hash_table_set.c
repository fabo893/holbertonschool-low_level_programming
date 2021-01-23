#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 *
 * Return: On success, always 1. Otherwise, 0
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int idx;
	unsigned long int kidx;
	hash_node_t *node;
	hash_node_t *old;

	for (idx = 0; key[idx] != '\0'; idx++)
		;
	if (idx == 0)
		return (0);
	if (ht == NULL)
		return(0);

	kidx = key_index((unsigned char *)key, (*ht).size);
	if ((*ht).array[kidx] != NULL)
	{
		old = (*ht).array[kidx];
		for (idx = 0; old != NULL; idx++)
		{
			if ((*old).key == key)
			{
				if ((*old).value == value)
					return (1);
			}
			old = (*old).next;
		}
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	(*node).key = (char *)key;
	(*node).value = (char *)value;
	if ((*ht).array[kidx] != NULL)
		(*node).next = (*ht).array[kidx];
	else
		(*node).next = NULL;

	(*ht).array[kidx] = node;

	return (1);
}
