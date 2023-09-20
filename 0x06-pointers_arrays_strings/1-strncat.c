#include "main.h"

/**
 * _strncat -startpoint
 * this is a c program that do a function that concatenates two strings.
 * return: @dest
 * @dest: this is a var need to cp content in src to it
 * @src: thisis the var tha cp content from it
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; *dest[i] != '\0'; i++)
		;
	for (j = 0; j <= i + n; j++)
		dest[j + i ] = src [j];
	return (dest);
}
