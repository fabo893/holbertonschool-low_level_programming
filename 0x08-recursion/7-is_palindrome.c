#include "holberton.h"

/**
 * palindromeproto1 - first prototype to help
 * @s: string
 * Return: integer
 */

int palindromeproto1(char *s)
{
	int x;

	x = 0;
	if (*s != 0)
	{
		x++;
		return (x + palindromeproto1(s + 1));
	}
	return (x);
}

/**
 * palindromeproto2 - second prototype to help
 * @s: Variable char
 * @x: Variable int
 * Return: On success, 0
 */

int palindromeproto2(char *s, int x)
{
	if (x <= 1)
		return (1);
	if (*s != s[x - 1])
		return (0);
	else
		return (palindromeproto2((s + 1), (x - 2)));
}

/**
 * is_palindrome - palindrome function
 * @s: String
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int x;

	x = palindromeproto1(s);
	if (x <= 1)
		return (1);
	return (palindromeproto2(s, x));
}
