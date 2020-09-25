#include "holberton.h"

/**
 * _isdigit - determines or checks for a digit.
 * @c: value to be verified.
 *
 * Return: 1 if digit 0 if otherwise.
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
