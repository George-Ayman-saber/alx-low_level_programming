#include "main.h"

/**
 * _strpbrk - startpoint
 * this is a c function that searches a string for any of a set of bytes.
 * @s: this is a var stored a content that u want to search in it
 * @accept: this is a array that u want to search it in s
 * Return: s+i
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;
	char *p;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
