#include "holberton.h"

/**
 * get_bit - return the value of a bit
 * @n: the number
 * @index: the index of the bit
 * Return: the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 32)
		return (-1);

	result = n >> index;

	return (result & 1);
}
