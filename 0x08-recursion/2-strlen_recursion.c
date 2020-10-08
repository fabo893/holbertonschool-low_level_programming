#include "holberton.h"

/**
 * _strlen_recursion - prototype function
 * @s: - Variable int pointer
 * Return: int value
 */

int _strlen_recursion(char *s)
{
	int a;

	if (*s == '\0')
		return (0);
	a = (1 + _strlen_recursion(s + 1));
	return (a);
}
