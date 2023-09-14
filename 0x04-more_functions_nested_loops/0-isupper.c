#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - startpoint
 * description: this is a c program the chaeck if c isupper or not
 * Return: 1 (success) 0 (failure)
 * @c: is the variable the enter to check
*/

int _isupper(char c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
