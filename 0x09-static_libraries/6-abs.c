#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: the int to check
 * Return: the absolute value of int
*/

int _abs(int c)
{
	if (c < 0)
	{
		c = c * (-1);
		return (c);
	}
	else
		return (c);
}