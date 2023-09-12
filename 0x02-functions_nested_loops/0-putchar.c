#include <stdio.h>
#include "main.h"

/**
 * main - startpoint
 * Description: this is a c program that print _putchar in new line
 * Return: 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch <= 7; ch++)
		_putchar(str[ch]);
	_putchar("\n");

	return (0);
}
