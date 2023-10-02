#include <stdio.h>

/**
 *  _strlen - startpoint
 *  this is the c  program return len of str
 *  Return: counter
 *  @s: this variable that stored the string and put it in my function
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);
}
