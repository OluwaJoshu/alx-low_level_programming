#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a newline
 * @separator: string to be printed between the strings
 * @n: number of strings passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int b;
	char *ch;

	va_start(ap, n);

	for (b = 0; b < n; b++)
	{
		ch = va_arg(ap, char *);
		if (ch == NULL)
			printf("(nil)");
		else
			printf("%s", ch);
		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
