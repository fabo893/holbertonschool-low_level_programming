#include "holberton.h"

/**
 * create_array - creates an aray of chars
 * @size: size of array
 * @c: character for initializes an array
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(*array) * size);
	if (array == NULL)
	{
		return (NULL);
	}


	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
