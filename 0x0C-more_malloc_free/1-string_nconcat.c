#include "holberton.h"

unsigned int len(char *str)
{
	unsigned int idx;

	for (idx = 0; str[idx] != '\0';)
	{
		idx++;
	}

	return (idx);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len_s1;
	unsigned int sum_len;
	unsigned int idx;
	unsigned int i;

	if (s2 == NULL)
	{
		n = 0;
	}
	else if ((len(s2)) <= n)
	{
		n = len(s2);
	}
	else
	{
		n = n;
	}


	len_s1 = len(s1);
	sum_len = (len_s1 + n) + 1;

	str = malloc(sizeof(char) * sum_len);
	if (str == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < len_s1; idx++)
	{
		str[idx] = s1[idx];
	}

	for (i = 0; i < n; i++, idx++)
	{
		str[idx] = s2[i];
	}
	str[idx] = '\0';

	return (str);
}
