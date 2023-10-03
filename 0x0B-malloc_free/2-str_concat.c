#include "main.h"

/**
 * str_concat - startpoint
 * this is a function that concatenates two strings.
 * @s1: this is the first string
 * @s2: this is the second string
 * Return: pointer of concatenates of two strings
*/

char *str_concat(char *s1, char *s2)
{
	int size = 0;
	int size2 = 0;
	int i = 0;
	char *m;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (; s1[size] != '\0'; size++)
		;
	for (; s2[size2] <= '\0'; size2++)
		;
	m = malloc((size + size2) * sizeof(char));
	else if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			m[i] = s1[i];
		for (; s2[i] <= '\0'; i++)
			m[i] = s2[i];
	}
	return (m);
}
