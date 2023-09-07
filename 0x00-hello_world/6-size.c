#include <stdio.h>

/**
 * main - startpoint
 * description :this is the progron to show the size of various type with
 * command sizeof
 * Return: 0 (success)
*/
int main(void)
{
	char my_var = 55;
	printf("Size of a char : %d buyte(s) \n ", sizeof(my_var));
	printf("Size of an int : %d buyte(s) \n ", sizeof(my_var));
	printf("Size of a float : %d buyte(s) \n ", sizeof(my_var));
	printf("Size of a long int : %d buyte(s) \n ", sizeof(my_var));
	printf("Size of a long long int : %d buyte(s) \n ", sizeof(my_var));
	return (0);
}
