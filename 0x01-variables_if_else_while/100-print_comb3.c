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

	for (i = 1; i <= 89; i++)
	{
		printf("%02d", i);
		if (i == 89)
			break;
		printf(", ");
	}
	putchar('\n');
	return (0);
}
