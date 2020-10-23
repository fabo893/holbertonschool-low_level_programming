#include "holberton.h"

/**
 * _strspn - get the length
 * @s: pointer
 * @accept: pointer
 * Return: sucess
 */
unsigned int _strspn(char *s, char *accept)
{
		unsigned int x, y, z, b;
		char n[98];

		for (x = 0; s[x] != ' '; x++)
		{
			n[x] = s[x];
		}
		n[x] = '\0';

		b = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			for (z = 0; n[z] != '\0'; z++)
			{
				if (n[z] == accept[y])
				{
					b++;
				}
			}
		}
		return (b);
}
