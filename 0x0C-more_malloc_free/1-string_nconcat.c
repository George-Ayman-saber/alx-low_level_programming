#include "main.h"

/**
 * string_nconcat - startpoint
 * this is ac function that concatenates two strings.
 * @s1: this is the string that i will concatenate to it
 * @s2: this is the string iw ill  + it to s1
 * @n: this is the no of char to copy it to s1
 * Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int i = 0, j = 0, k = 0, x = 0;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	for (; s1[k] != '\0'; k++)
		;
	for (; s2[x] != '\0'; x++)
		;
	if (n >= x)
		n = x;
	m = malloc(n + k + 1);
	if (m == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		m[i] = s2[j];
		i++;
	}
	m[i] = '\0';
	return (m);
}
