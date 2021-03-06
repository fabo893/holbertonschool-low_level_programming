#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: constant parameter int
 *
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lts;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(lts, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(lts, int);
	}
	va_end(lts);

	return (sum);
}
