#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: parameter
 */
void rev_string(char *s)
{
	int x, y, z = 0;
	char a;

	for (x = 0; s[x] !='\0'; x++)
		;

	for (y = (x - 1); y > z; y--)
	{
		a = *(s + z);
		*(s + z) = *(s + y);
		*(s + y) = a;
		z++;
	}
}
/**
 s = hola!

 for (y = (5 - 1); 4 >= z; 4--)
 {
        a = *(s + z) = 'h'
        posicion 0('h') = posicion 4 ('!')
        posicion 4('!') = a ('h')
        z++
 }
*/
