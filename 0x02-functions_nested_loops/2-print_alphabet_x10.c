#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - startpoint
 * description: this is a c program that print all alphabet x10
*/

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
