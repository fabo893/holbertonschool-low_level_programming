#include "hash_tables.h"

/**
 * *hash_table_create - create a hash table
 * @size: the size of the array
 *
 * Return: On success, a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *tb;
	unsigned long int idx;

	tb = malloc(sizeof(hash_table_t));
	if (tb == NULL)
		return (NULL);

	(*tb).size = size;

	(*tb).array = malloc(sizeof(hash_node_t *) * size);
	if ((*tb).array == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		(*tb).array = NULL;

	return (tb);
}

