#include <stdio.h>

/**
 * main - startpoint
 * Description :This is a c program that print all reversed alphabet
 * Return: 0 (success)
*/

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
