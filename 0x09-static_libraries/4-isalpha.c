#include "main.h"

/**
 * _isalpha - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is , 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
