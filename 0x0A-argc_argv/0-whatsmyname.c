#include "main.h"

/**
 * main -startpoint
 * this is the c function that that prints its name, followed by a new line.
 * @argc: this is the size of argv
 * Return: 0
 * @argv: this is the arg that stored the data
*/

int main (int argc, char *argv[])
{
	printf("%s", argv[0]);
	putchar('\n');
	return (0);
}
