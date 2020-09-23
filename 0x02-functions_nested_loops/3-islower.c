#include "holberton.h"

/**
 * _islower - check lowercase chararcter
 * @c: number checked for lowercase condition
 * Return: lowercase
 */
int _islower(int c)
{
	if ((int)c >= 97 && (int) c <= 122)
		return (1);
	else
		return (0);
}
