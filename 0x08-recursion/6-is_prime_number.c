#include "main.h"
int check_prime(int n, int othern);

/**
 * is_prime_number - startpoint
 * this is a function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: this is the number that u want to check it
 * Return: check_prime
*/

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - second point
 * this is a function that check if it prime or not
 * @n: this is the n that u want to check it
 * @othern: this is the number that if n diviable by othern
 * debugging the conditions
 * Return: 1 if it prime and 0 if it isnt prime number and recursion
 * if it isnt in any if condition
*/

int check_prime(int n, int othern)
{
	if ((othern >= n) && (n > 1))
		return (1);
	else if ((n % othern == 0) || (n <= 1))
		return (0);
	return (check_prime(n, othern + 1));
}
