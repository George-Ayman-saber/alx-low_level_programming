#include "main.h"

/**
 * leet - startpoint
 * this is a function that do  encodes a string into 1337.
 * @c: this is the var stored the content do encode
 * Return: cp
*/

char *leet(char *c)
{
	unsigned int i;
	char keys[] = {'A', 'E', 'O', 'T', 'L'};
	int values[] = {4, 3, 0, 7, 1 };
	char *cp = c;

	while (*c)
	{
		for (i = 0; i < sizeof(keys) / sizeof(char); i++)
		{
			if (*c == keys[i] || *c == keys[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}
	return (cp);
}
