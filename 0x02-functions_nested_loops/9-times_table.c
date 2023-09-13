#include "main.h"


void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9, i++)
		for (j = 0; j <= 9, j++)
		{
			for (k = j + 1; k <= 9, k++)
				_putchar((j * k) + '0');
			_putchar('\n');
		}
}
