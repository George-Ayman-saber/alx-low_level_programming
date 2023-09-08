#include <stdio.h>

/**
 * main - startpoint
 * Description:this is a c program to do show
 * if the rand number is nrgative or postive or zero
 * Return: 0 (success)
*/

int main(void)
{
	int n ;
	if (n > 0)
	{
		printf("%d is positive\n",n);
	}
	else if (n < 0)
	{
		printf("%d is negative \n",n);
	}
	else
	{
		printf("%d is equal to zero\n",n);
	}
	return (0);
}
