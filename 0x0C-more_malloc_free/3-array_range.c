#include "holberton.h"

/**
 * *array_range - creates an array of integers.
 * @min: int.
 * @max: int.
 * Return: On success, a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int idx;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);

	for (idx = 0; min < max; idx++, min++)
		ptr[idx] = min;

	return (ptr);
}
