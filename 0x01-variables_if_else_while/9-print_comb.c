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

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
		if (i == 9)
			break;
		printf(", ");
	}
	putchar('\n');
	return (0);
}
