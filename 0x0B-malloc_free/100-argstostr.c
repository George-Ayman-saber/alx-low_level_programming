#include "main.h"

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
		nc += _strlen(av[i]);
	tab = malloc(sizeof(char) * nc + 1);
	if (tab == 0)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			tab[i] = av[i][j];
		tab[cmpt] = '\n';
		cmpt++;
	}
	tab[cmpt] = '\0';
	return (tab);
}
