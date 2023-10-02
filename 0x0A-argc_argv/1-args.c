#include "main.h"

/**
 * main -startpoint
 * this is a c function that that prints the number of arguments passed into it.
 * @argc: int
 * @argv: array
 * Return :0*/

int main(int argc, char const **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
