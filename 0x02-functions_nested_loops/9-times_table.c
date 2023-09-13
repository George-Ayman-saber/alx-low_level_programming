#include "main.h"


void times_table(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				l = k * j;
				_putchar(l + '0');
				_putchar(44);
				_putchar(32);
			}
			_putchar('\n');
		}

}
