#include "function_pointers.h"

/**
 * array_iterator - executes a funciton given
 * @array: array
 * @size: size of the array
 * @action: pointer to function
 * @int: integer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
