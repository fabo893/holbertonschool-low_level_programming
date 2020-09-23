#include "holberton.h"

/**
 * Is lower - check lowercase chararcter
 *
 * Return: lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
