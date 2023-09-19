#include "main.h"

/***/

void puts2(char *str)
{
	int i = 0;
	
	for (i = 0; *str[i] != '\0'; *str++)
	{
		if (i % 2 == 0)
		       	_putchar(str[i]);
		else
			continue;
		i++;
	}
}
