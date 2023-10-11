#include "function_pointers.h"

/**
 * array_iterator - this is a function that executes
 * a function given as a parameter on each element of an array.
 * @array: this is an array
 * @size: size of array
 * @action: this is a pointer to function
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && action && size)
		while (array <= end)
			action(*array++);
}
