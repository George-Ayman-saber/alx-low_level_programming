#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - startpoint
 * description: this is a c program the chaeck if c isupper or not
 * Return: 1 (success) 0 (failure)
 * @c: is the variable the enter to check
*/

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
