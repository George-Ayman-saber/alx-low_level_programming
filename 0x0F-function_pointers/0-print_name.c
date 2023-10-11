#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -starpoint
 * this is afunction that prints a name.
 * @name: name of the person
 * Return: Nothing.
 * @f: this is pointer to function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
