#include "main.h"

/**
 * main -startpoint
 *this is a c program that multiplies two numbers.
 * @argc: this is a size of array
 * @argv: this is an array
 * Return: 0 or 1 if failed
*/

int main(int argc, char *argv[])
{
	int i = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int mul = 1;

		while (i < argc)
		{
			mul *= argv[i];
			i++;
		}
		return (mul);
	}
