#include "holberton.h"

/**
 * _isupper - verifies for uppercase characters
 * @c: value to be verified
 *
 * Return: 1 (success)
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
