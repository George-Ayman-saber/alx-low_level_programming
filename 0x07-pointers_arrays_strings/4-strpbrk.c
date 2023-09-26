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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == accept[i])
			return (s + i - 1);
	}
	return (s + i);
}
