#include "holberton.h"

/**
 * binary_to_uint - converts a binary number
 * @b: pointer
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int i;
	int index = 0;

	if (b == NULL)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
		if (b[index] != '0' && b[index] != '1')
			return (0);

	for (index--, i = 1; index >= 0; index--, i *= 2)
		if (b[index] == '1')
			sum += i;

	return (sum);
}
