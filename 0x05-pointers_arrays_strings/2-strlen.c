#include <stdio.h>

/**
 *  _strlen - startpoint
 *  this is the c  program return len of str
 *  Return: len
 *  @str: this variable that stored the string and put it in my function
*/

int _strlen(char *str)
{
	int len;

	len = sizeof(str) / sizeof(str) - 1;
	return (len);
}
