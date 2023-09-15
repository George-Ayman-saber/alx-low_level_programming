#include "main.h"

/**
 * print_triangle - startpoint
 * this is a c program that print space with hash # make a triangle
 * @size: is the variable to enter the no.
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i; j++)
					putchar(' ');
			for (k = 0; k <= i; k++)
					putchar('#');
			putchar('\n');
		}
	}
}
