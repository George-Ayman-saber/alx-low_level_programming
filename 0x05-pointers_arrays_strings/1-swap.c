#include <stdio.h>

/**
 * swap_int - startpoint
 * this is a c program that exchange the velue of b to a and a to b
 * @a:this is the  variable that enter in this is
 * the address of variable in program
 * @b:this is the  variable that enter in this is
 *  the address of variable in program6
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
