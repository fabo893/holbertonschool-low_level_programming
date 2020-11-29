#include "holberton.h"


/**
 * _strlen - returns th length of a string.
 * @s: parameter
 * Return: always zero
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; )
		x++;

	return (x);
}


/**
 * *string_nconcat- concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concatenate.
 *
 * Return: pointer of a newly location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
/*	char *str; */
	unsigned int idx;
	unsigned int len;
	unsigned int idx2;

	len = _strlen(s2);

	array = malloc(sizeof(char) * n);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (idx = 0; s1[idx] != '\0'; idx++)
	{
		array[idx] = s1[idx];
	}

	idx2 = idx;

	if (n >= len)
		n = len;

	for (idx = 0; idx < n; idx++, idx2++)
	{
		array[idx2] = s2[idx];
	}

	array[idx2] = '\0';

	return (array);
}
