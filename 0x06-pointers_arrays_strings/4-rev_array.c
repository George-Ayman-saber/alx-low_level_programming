#include "main.h"

/**
 * reverse_array -startpoint
 * this is a c program that do a function that reverses
 * the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int temp[n];

	while (i < n)
	{
		temp[i] = a[n - i - 1];
		i++;
	}
	while (j < n)
	{
		a[n - j - 1] = temp[j];
	}
	return (a);
}
