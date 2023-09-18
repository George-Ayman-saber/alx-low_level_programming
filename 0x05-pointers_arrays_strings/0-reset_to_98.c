#include <stdio.h>

/**
 * reset_to_98 - startpoint
 * this is a c program that change reset n to 98
 * Return: *p =98 to change n
 * @p : this is the variable that take address to change the value exist
 * in address
*/

int reset_to_98(int *p)
{
	*p = 98;
	return (*p);
}
