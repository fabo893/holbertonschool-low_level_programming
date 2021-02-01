#include <stdio.h>

/**
 * main - main program
 *
 * Return: On success, always 0.
 */
int main(void)
{
	unsigned int long counter, fn, sn, res, sum;

	sum = 2;
	fn = 1;
	sn = 2;
	while (1)
	{
		res = fn + sn;
		if (res % 2 == 0)
			sum += res;
		if (res > 4000000)
			break;
		fn = sn;
		sn = res;
	}

	printf("%lu\n", sum);

	return (0);
}
