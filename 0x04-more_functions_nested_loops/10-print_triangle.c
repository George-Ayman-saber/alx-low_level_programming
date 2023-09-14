#include "main.h"

/**
 * print_triangle - startpoint
 * this is a c program that print space with hash # make a triangle
 * @size: is the variable to enter the no.
*/

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n')
	else
	{
		for (i = 0; i = size; i++)
		{
			for (j = (size - 1); j >= 0; i--)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
}
