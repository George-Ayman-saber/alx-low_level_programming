#include "main.h"

/**
 * puts2 -startpoint
 * this is a c program the Write a function that prints every
 * other character of a string
 * starting with the first character, followed by a new line.
 * @str: this is the variable stored the addres of var u need to do
 *  in this function
*/

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
		       	_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}
