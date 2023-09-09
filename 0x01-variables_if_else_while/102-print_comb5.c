#include <stdio.h>

/**
 * main - startpoint
 * Description: this is a c program that print
 * the single digits from 0 to 9 with comma
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	for (i = '1'; i <= '9899'; i++)
	{
		putchar('%04d', i);
		if (i == 9899)
			break;
		printf(", ");
	}
	putchar('\n');
	return (0);
}
