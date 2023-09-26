#include "main.h"

/**
 * _strchr - startpoint
 * this is a function  that locates a character in a string.
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * @s : this is a var stored content u want to check c in it or not
 * @c: this is the char u want to chaeck if it in s ot not
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
