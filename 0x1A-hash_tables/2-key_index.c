#include "hash_tables.h"

/**
 * key_index - get the index of the key
 * @key: key
 * @size: size of the array
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int num;
	unsigned long int res;

	num = hash_djb2(key);
	res = num % size;

	return (res);
}
