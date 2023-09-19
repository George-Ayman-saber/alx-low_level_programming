#include "main.h"

/***/

void puts_half(char *str)
{
	int i = 0;
	int k;
	int j;

	for (i = 0; str[i] != '\0'; ++i)
		;
	if (i % 2 != 0)
		k = (i - 1) / 2;
	else
		k = i / 2;
	for (j = 0; j <= i; j++	)
		_putchar(str[j]);
	_putchar('\n');
}
