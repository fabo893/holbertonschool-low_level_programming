#include "holberton.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: return 1 if success of -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned int comp = 1;

	if (index > 32)
		return (-1);

	comp = comp << index;

	*n = *n | comp;
	return (1);

}
