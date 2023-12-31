#include "3-calc.h"

/**
 * main - check the code
 * @argc: the nuber of args
 * @argv: argument vector
 *
 * Return: always 0
*/

int main(int argc, char **argv)
{
	int (*op_func)(int, int), a, b;

	if (argv != 4)
		printf("ERROR\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(arg[2]);
	if (!op_func)
		printf("ERROR\n"), exit(99);
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("ERROR\n"), exit(100);
	printf("%d\n", op_func(a, b));
	return (0);
}
