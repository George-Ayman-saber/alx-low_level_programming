#include <stdio.h>

/**
 * main - startpoint
 * Description : this is a c program that print all alphabet
 * without e and q
 * Return: 0 (success)
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
