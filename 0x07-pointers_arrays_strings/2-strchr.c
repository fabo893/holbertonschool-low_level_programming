#include "holberton.h"
#include <string.h>

/**
 * *_strchr - locate a character
 * @s: pointer
 * @c: variable
 * Return: Null if not work
 */
char *_strchr(char *s, char c)
{
  int x;

  for (x = 0; s[x] != '\0'; x++)
    {
      if (s[x] == c)
	return (&s[x]);
      else if (s[x] == '\0')
	return (NULL);
    }
  if (c == '\0')
    return (&s[x]);

  return (NULL);
}
