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

	for (idx = 0; key[idx] != '\0'; idx++)
		;
	if (idx == 0)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	kidx = key_index((unsigned char *)key, (*ht).size);

	(*node).key = (char *)key;
	(*node).value = (char *)value;
	if ((*ht).array[kidx] != NULL)
		(*node).next = (*ht).array[kidx];
	else
		(*node).next = NULL;

	(*ht).array[kidx] = node;

	return (1);
}
