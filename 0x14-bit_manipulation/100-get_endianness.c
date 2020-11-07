#include "holberton.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endiannes of 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;

	return ((int) (((char *)&x)[0]));
}
