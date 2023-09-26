#include "main.h"

/**
 *  _strspn -starpoint
 *  this is a c function that gets the length of a prefix substring.
 *  Return: j
 *  @s: this is the the content that check a if in there or not
 *  @a: this is the array that u want to check it
*/

unsigned int _strspn(char *s, char *a)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ( s[i] == a[i])
			j++;
		else if (a[i] == '\0')
			break;
	}
	return (j);
}
