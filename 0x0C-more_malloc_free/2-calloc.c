#include "main.h"

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
	char *m;
	int i = 0;

	m = malloc(nmemb * sizeof(int));
	if (m = 0)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		m[i] = 0;
	return (m);
}
