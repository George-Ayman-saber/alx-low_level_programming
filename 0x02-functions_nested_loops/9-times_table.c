#include "main.h"


void times_table(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
		for (j = 1; j <= 9; j++)
		{
			k = i * j;
			_putchar(k + '0');
			_putchar(44);
			_putchar(32);
		}
	_putchar('\n');
}
