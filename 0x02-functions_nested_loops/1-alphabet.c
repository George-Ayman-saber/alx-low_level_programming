#include "main.h"

/**
 * print_alphabet - startpoint
 * description: this is a c program that print alphabet by using
 * prototype void print_alphabet(void)
 * Return: 0(success)
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
