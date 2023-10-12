#include "variadic_functions.h"

/**
 * sum_them_all - this is a function that returns the sum of all its parameters
 * @n: this is the count
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);
	int i, sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}