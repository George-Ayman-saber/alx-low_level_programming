#include <stdio.h>

/**
 * main - startpoint
 * Description: this is a c program that print
 * the single digits from 0 to 9 and letters for a to f
 * Return: 0 (success)
*/

int main(void)
{
	int i;
	char j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
