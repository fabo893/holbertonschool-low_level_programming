#include "holberton.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: rows of the array
 * @height: columns of the array
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int h;
	int w = 0;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(array) * height);
	if (array == NULL)
	{
		return (NULL);
	}


	for (h = 0; h < height; h++)
	{
		array[h] = malloc(sizeof(int) * width);
		if (array[h] == NULL)
		{
			for (h -= 1; h >= 0; h--)
				free(array[h]);

			free(array);
			return (NULL);
		}

		for (; w < width; w++)
		{
			array[h][w] = 0;
		}
	}
	return (array);
}
