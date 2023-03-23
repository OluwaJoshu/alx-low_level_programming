#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: returns nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int a = 0, b, c = 0;
	char *ptr;
	const char s_arg[] = "cifs";

	va_start(ap, format);
	while (format && format[a])
	{
		b = 0;
		while (s_arg[b])
		{
			if (format[a] == s_arg[b] && c)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), c = 1;
				break;
			case 's':
				ptr = va_arg(ap, char *), c = 1;
				if (!ptr)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ptr);
				break;
		} a++;
	} printf("\n"), va_end(ap);
}
