#include "holberton.h"

/**
 * *string_nconcat - pointer to char that concatenate two string in the heap.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes from s2 to concatenate to s1.
 * Return: On success, a pointer to char that has the full string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, idx, ii, iii;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (idx = 0; s2[idx] != '\0'; idx++)
		;
	if (n >= idx)
		n = idx;
	str = malloc((sizeof(char) * (i + n)) + 1);
	if (str == NULL)
		return (NULL);

	for (ii = 0; ii < i; ii++)
		str[ii] = s1[ii];
	for (iii = 0; iii < n; iii++, ii++)
		str[ii] = s2[iii];
	str[ii] = '\0';
	return (str);
}
