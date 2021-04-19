#include <stdio.h>

/**
 * main - main program
 *
 * Return: On success, always 0
 */
int main(void)
{
	unsigned long long int i, x, res, tmp;

	tmp = 1;
	x = 0;
	// printf("%llu, %llu, ", tmp, x);
	for (i = 1; i <= 98; i++)
	{
		if (i > 1)
			printf(", ");
		res = tmp + x;
		printf("%llu", res);
		tmp = x;
		x = res;
	}
	printf("\n");

	return (0);
}
