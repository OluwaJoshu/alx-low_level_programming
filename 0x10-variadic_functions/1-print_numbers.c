#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: returns nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int g;

	va_start(ap, n);

	for (g = 0; g < n; g++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && g < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
