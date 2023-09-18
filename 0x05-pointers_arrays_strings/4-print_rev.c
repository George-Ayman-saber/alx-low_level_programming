#include "main.h"

/**
 * print_rev - startpoint
 * this is a c program to write a function that prints a string
 * in reverse, followed by a new line
 * @s: this is a var stored a addres of s
*/

void print_rev(char *s)
{
	int i;

	for (i = '\0'; i >= 0; s++)
	{
		i++;
		_putchar(*s);
	}
	_putchar('\n');
}
