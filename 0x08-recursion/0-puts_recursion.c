#include "main.h"

/**
 * _puts_recursion -start point
 * this is a c function that prints a string, followed by a new line.
 * @s: this is the string u want to print it
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
