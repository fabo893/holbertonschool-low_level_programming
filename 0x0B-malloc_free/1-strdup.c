#include "holberton.h"

/**
 * *_strdup - return a pointer to a newly allocated space
 * @str: string to be copied.
 * Return: pointer if success or NULL if is fails
 */
char *_strdup(char *str)
{
	char *str2;
	int index;
	int index2;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index] != '\0'; index++)
		;

	str2 = malloc(sizeof(*str2) * index - 1);
	if (str2 == NULL)
	{
		return (NULL);
	}

	for (index2 = 0; index2 < index; index2++)
	{
		str2[index2] = str[index2];
	}
	return (str2);

}
