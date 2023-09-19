#include "main.h"

/***/

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = 0; j <= i; j++)
	{
		if (j % 2 == 0)
		       	_putchar(str[j]);
		else
			continue;
	}
}
