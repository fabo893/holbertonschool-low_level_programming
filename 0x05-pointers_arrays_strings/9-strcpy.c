#include "holberton.h"

/**
 * _strcpy - copy the string
 * @dest: first variable
 * @src: secornd variable
 * Return: return variable dest
 */
char *_strcpy(char *dest, char *src)
{
	int n;
	char content;

	for (n = 0; src[n] != '\0'; n++)
	{
		content = src[n];
		dest[n] = content;
	}
	dest[n] = '\0';
	return (dest);
}
