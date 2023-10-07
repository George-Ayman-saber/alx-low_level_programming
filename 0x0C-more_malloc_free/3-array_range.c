#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: this is the min value
 * @max: this is the max value
 * Return: m
*/

int *array_range(int min, int max)
{
	int i = 0, len = (max - min + 1);
	int *m;

	if (min > max)
	{
		return (NULL);
	}
	m = malloc(sizeof(int) * len);
	if (m == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		m[i] = min++;
	}
	return (m);
}
