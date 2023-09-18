#include "main.h"

/**
 * print_rev - startpoint
 * this is a c program to write a function that prints a string
 * in reverse, followed by a new line
 * @s: this is a var stored a addres of s
*/

void print_rev(char *s)
{
	int i = 0;
	int n = sizeof(s) / sizeof(s[0]) - 1;;
	char j[n];

	for (i = n; i >= 0; i--)
	{
		j[i] += s[i];
	}
}

