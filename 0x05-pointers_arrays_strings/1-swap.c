#include "holberton.h"

/**
 * swap_int - swap the values of two integers
 * @a: first param
 * @b: second param
 * Return: always zero
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
