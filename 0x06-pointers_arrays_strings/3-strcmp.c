#include "main.h"

/**
 * _strcmp - startpoint
 * this is a c program that do a function that compares two strings.
 * Return: 0 or s1[i]-s2[i]
 * @s1: this is the first var stored content want to check it with @s2
 * @s2: this is the secord var stored content want to check it with @s1
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
