#include <stdio.h>

/**
 * main - main program
 *
 * Return: On success, always 0
 */
int main(void)
{
	unsigned int long i, x, res, tmp;

	tmp = 1;
	x = 2;
	printf("%lu, %lu, ", tmp, x);
	for (i = 1; i < 97; i++)
	{
		if (i > 1)
			printf(", ");
		res = tmp + x;
		printf("%lu", res);
		tmp = x;
		x = res;
	}
	printf("\n");

	return (0);
}
