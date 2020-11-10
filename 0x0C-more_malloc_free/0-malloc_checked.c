#include "holberton.h"

/**
 * *malloc_checked - allocates memory
 * @b: amount of memory to use
 * Return: On success, a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);

	return (x);

}
