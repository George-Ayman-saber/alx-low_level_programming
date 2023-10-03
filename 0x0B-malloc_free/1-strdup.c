#include "main.h"

/***/

char *_strdup(char *str)
{
	char *n = malloc(sizeof(str));
	int i = 0;

	if (*str == '\0')
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		n[i] = str[i];
	return (n);
}
