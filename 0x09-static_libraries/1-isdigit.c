#include "main.h"

/**
 * _isdigit - start point
 * description: this is a c program that check if the @c isdigit or not
 * Return: 1 (success) 0 (failure)
 * @c: is the var the  enter to check
*/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
