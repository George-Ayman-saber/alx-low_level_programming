#include "main.h"i

/**
 * string_toupper - startpoint
 * this is a c program do a function that changes
 * all lowercase letters of a string to uppercase.
 * Return: 0 (success)
 * @s: this is the var stored the content that u want to make it uppercase
*/

char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (((int)s[i] >= 97) || ((int)s[i] <= 122))
		{
			s[i] = (s[i] - 32);
		}
	}
	return (0);
}
