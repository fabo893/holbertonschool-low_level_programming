#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number in decimal way
 * @index: index to be changed
 * Return: On success 1, on fails -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int setBit = 1;

	if (n == NULL)
		return (-1);

	setBit = setBit << index;

	*n = *n & ~setBit;
	return (1);

}
