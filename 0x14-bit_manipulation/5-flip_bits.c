#include "holberton.h"

/**
 * flip_bits - return the number of bits you need to flip number
 * @n: a given number to change
 * @m: number expected after the change
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0;
	int xor;

	for (xor = n ^ m; xor != 0; xor = xor >> 1)
	{
		bits += xor & 1;
	}
	return (bits);

}
