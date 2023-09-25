#include "main.h"

/**
 * _memset -startpoint
 * this is a c function that do fills memory with a constant byte.
 * @s: this is the var stored the content
 * @b: this is the assci code want to put it in s
 * @n: this is the number that how many time i write the b in s
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
