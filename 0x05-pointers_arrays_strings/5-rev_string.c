#include "main.h"

/**
 * rev_string - startpoint
 * this is a c program to write a function that prints a string
 * in reverse, followed by a new line
 * @s: this is a var stored a addres of s
*/

void rev_string(char *s)
{
	int i = 0;
	int j;

	for (j = 0; *s != '\0'; s++)
	{
		_putchar(*s);
		j++;
	}
	while (s[i])
	{
		i++;
	}
	_putchar('\n');
	while (i--)
        {
		 _putchar(s[i]);
	}
	_putchar('\n');
}
