#include "main.h"

/**
 * argstostr - startpoint
 * this is a c function that concatenates all the arguments of your program.
 * @ac: this is the the count of  string
 * @av: this is the value
 * Return: 0
*/

char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int nc = 0;
	int cmpt = 0;
	char *tab;

	if (ac == 0 || av  == NULL)
		return (NULL);
	for (; i < ac; i++, nc++)
		nc += _strlen[i];
	tab = malloc(ac * sizeof(**tab) + ac);
	if (tab == 0)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			tab[i] = av[i][j];
		tab[cmpt] = '\n';
		cmpt++;
	}
	return (tab);
}
