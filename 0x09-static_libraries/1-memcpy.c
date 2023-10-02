#include "main.h"

/**
 * _memcpy -startpoint
 * this is a c function that function copies n bytes
 * from memory area src to memory area dest
 * @dest: this is the var stored the content
 * @src: this is the array that  want to put it in dest
 * @n: this is the number that how many time i write the src in dest
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
