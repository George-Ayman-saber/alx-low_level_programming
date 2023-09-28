#include "main.h"

/**
 * _puts_recursion(char *s) -start point
 * this is a c function that prints a string, followed by a new line.
 * @s: this is the string u want to print it
*/

void _puts_recursion(char *s)
{
	int i;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}	
	_putchar(s[i]);
	i++;
	_puts_recursion(s[i]);
}
