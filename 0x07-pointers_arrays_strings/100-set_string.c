#include "main.h"

/**
 * set_string -startpoint
 * this is a c function that sets the value of a pointer to a char.
 * @s: it is the pointer
 * @to: it is the char
*/

void set_string(char **s, char *to)
{
	*s = to;
}
