#include <stdio.h>

/**
 * main - startpoint
 * description : print the sum of all numbers the divisable by 3 or 5
 * Return: 0 (success)
*/

int main(void)
{
	int x, sum;

	for (x = 1; x < 10; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
			sum = sum + x;
	}
	printf("%d \n", sum);
	return (0);
}
