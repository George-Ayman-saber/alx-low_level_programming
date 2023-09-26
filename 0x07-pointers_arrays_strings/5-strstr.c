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

	if (n[0] == '\0')
		return (h);
	for (i = 0; h[i] != '\0'; i++)
	{
		if (h[i] == n[0])	
		{
			for (j = 0; h[j] != '\0' && h[i + j] == n[j]; j++)
			{					
				;
			}
			return (&h[i]);
		}
	}
	return (NULL);	
}
