#include "main.h"
#include <stdlib.h>

/**
 * _calloc - startpoint
 * this is a c  function that allocates memory for an array, using malloc.
 * like clloc with default 0
 * @b: this is the number u want to put it  in  all array as default
 * @s: this is a array
 * @n: this is the the size of array
 * Return: ptr
*/

char * _memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * _calloc - startpoint
 * this is a c  function that allocates memory for an array, using malloc.
 * like clloc with default 0
 * @nmemb: this is the number of element
 * @size: this is a sizr of data type
 * Return: 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;
	int i;

	n = malloc(nmemb * sizeof (int));
	if (n == 0 || nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		n[i] = 0;
}
