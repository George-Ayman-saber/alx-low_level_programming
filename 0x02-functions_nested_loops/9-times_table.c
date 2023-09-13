#include "main.h"

void times_table(void) {
	int i, j, k;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j
			if (j != 0)
			{
				_putchar(44);  // comma
				_putchar(32);  // spac
			}
			if (k < 10)
			{
				if (j != 10)
					_putchar(' ');  // extra space for alignment
			}
			_putchar(k + '0');
		}
		else 
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
	}
	_putchar('\n');
}
