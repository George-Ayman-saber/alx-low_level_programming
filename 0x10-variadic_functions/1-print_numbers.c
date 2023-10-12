#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - this is a function that prints numbers,
 * followed by a new line.
 * @separator: this is sepa. numbers with this
 * @n: this is a count
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list b;

	if (!separator)
		separator = "";
	va_start(b, n);
	for (i = n; i > 0; i--)
	{
		printf("%d", va_arg(b, int));
		if (i != 1)
			printf("%s", separator);
	}
	printf("\n");
}
