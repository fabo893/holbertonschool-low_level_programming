#include "holberton.h"

/**
 * *argstostr - concatenates all the arguments
 * @ac: total of arguments
 * @av: arguments
 * Return: a pointer to a string
 */
char *argstostr(int ac, char **av)
{
	char *array;
	int x, y;
	int siz = 0;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			siz++;
		}
		siz++;
	}

	siz++;
	array = malloc(sizeof(char) * siz);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			array[index] = av[x][y];
			index++;
		}
		array[index] = '\n';
		index++;
	}
	array[index] = '\0';

	return (array);
}
