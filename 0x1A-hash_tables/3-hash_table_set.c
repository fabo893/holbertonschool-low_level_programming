#include "hash_tables.h"

/**
 * hash_checker- check
 * @array: array
 * @key: key
 * @value: value
 *
 * Return: On success, 1
 */
int hash_checker(hash_node_t *array, const char *key, const char *value)
{
	hash_node_t *old;
	int ix;

	old = array;
	for (ix = 0; old != NULL; ix++)
	{
		if ((*old).key == key)
		{
			(*old).value = strdup(value);
				return (1);
		}
		old = (*old).next;
	}
	return (0);
}


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
	int idx, res;
	unsigned long int kidx;
	hash_node_t *node;

	for (idx = 0; key[idx] != '\0'; idx++)
		;
	if (idx == 0)
		return (0);
	if (ht == NULL)
		return (0);

	kidx = key_index((unsigned char *)key, (*ht).size);
	res = 0;
	if ((*ht).array[kidx] != NULL)
		res = hash_checker((*ht).array[kidx], key, value);

	if (res == 1)
		return (1);

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
