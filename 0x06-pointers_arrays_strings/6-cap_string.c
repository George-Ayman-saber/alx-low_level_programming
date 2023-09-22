#include "main.h"

/**
 * islower -startpoint
 * this is a c program that check if it lower or not
 * @c: this is the var stored data to check it
 * Return: c
*/

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdelimiter  - second point
 * this is a function that check if there delimiters or not
 * @c : this is the var stored data that i ckeck it
 * Return:(0)
*/

int isdelimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - startpoint
 * this is the function that do a capitalizes all words of a string.
 * @s: this is the var that stored the content want to capitalizes
 * all words of a string.
 * Return: ptr
*/

char *cap_string(char *s)
{
	int founddelimiter = 1;
	char *ptr = s;

	while (*s)
	{
		if (isdelimiter(*s))
			founddelimiter = 1;
		else if (islower(*s) && founddelimiter == 1)
		{
			*s -= 32;
			founddelimiter = 0;
		}
		else
			founddelimiter = 0;
		s++;
	}
	return (ptr);
}
