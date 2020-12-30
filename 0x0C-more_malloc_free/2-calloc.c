#include "holberton.h"

/**
 * *_calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of elements.
 * Return: On success, a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int idx;
	unsigned int total = nmemb * size;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (idx = 0; idx < total; idx++)
		ptr[idx] = 0;

	return (ptr);
}
