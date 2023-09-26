#include "main.h"

/**
 * _strstr - startpoint
 * this is a c function that _strstr how? by finding the first occurrence of
 * the substring needle in the string haystack. The terminating null bytes
 * (\0) are not compared
 * @h: this is a var that have the content
 * @n: this is the content that the h will start with him
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
*/

char *_strstr(char *h, char *n)
{
	int i = 0;
	int j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == n[i])
		{
			for (j = 0; s[j] != '\0'; j++)
			{
				p = &h[i + j];
			}
			return (p);
		}
	}
	return (p);
}
