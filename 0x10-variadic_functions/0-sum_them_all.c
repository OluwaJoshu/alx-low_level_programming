#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums up all its parameters
 * @n: number of parameters to be sumed
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int f, sum;

	va_start(ap, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (f = 0; f < n; f++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
