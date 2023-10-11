#include "function_pointers.h"

/**
 * int_index - this is  a function that searches for an integer.
 * @array: its an array
 * @size:  is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: cmp or  -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
