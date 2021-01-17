#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 *
 * Return: 1 to the standard error
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		write(1, str + idx, 1);
	}

	return (1);
}
