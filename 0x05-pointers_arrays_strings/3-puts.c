#include "main.h"

/**
 * _puts - startpoint
 * this is a c program that print the str in new line
 * @str:this is the var that stored the adrees of str
*/

void _puts(char *str)
{
	int i = 0;

	for (i = 0; *str != '\0'; str++)
	{
		i++;
		_putchar(str);
	}
	_putchar('\n');
}
