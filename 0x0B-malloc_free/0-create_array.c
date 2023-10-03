#include "main.h"

/**
 * create_array - startpoint
 * this is a  function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: this is the size
 * @c: this the char that take a size of him to product to size
 * Return:0
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (n == 0 || size == 0)
		return (0);
	while (--size)
		n[size] = c;
	return (n);
}
