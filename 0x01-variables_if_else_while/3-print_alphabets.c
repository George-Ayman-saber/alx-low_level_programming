#include <stdio.h>

/**
 * main - startpoint
 * Description: this is a c program that print alphabet
 * with lowercase then uppercase
 * Return: 0 (success)
*/

int main(void)
{
	char x, y;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
