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
	int len = 0;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
		_putchar(s[i]);
	}
	for (j = len; j >= 0; j--)
	{
		_putchar(s[j]);
	}
}
