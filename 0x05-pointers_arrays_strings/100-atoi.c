#include "holberton.h"

/**
 * _atoi - Function that convert string to int
 * @s: String to convert to int
 *
 * Return: Value of converted number
 */

int _atoi(char *s)
{
	int i = 0, convert = 0, neg = -1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			neg *= -1;
		i++;
	}

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
		convert = (convert * 10) - (s[i++] - '0');
	return (convert * neg);
}
