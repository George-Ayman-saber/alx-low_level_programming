#include "variadic_functions.h"

/**
 * print_strings -this is a  function that prints strings,
 * followed by a new line.
 * @separator: this is the separator
 * @n: counter
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list b;
	char *str;

	va_start(b, n);
	while (i--)
	{
		printf("%s", (str = va_arg(b, char*)) ? str : "(nil)");
		printf("%s", i ? (separator ? separator) : "\n");
	}
	va_end(b);
	printf("\n");
}
