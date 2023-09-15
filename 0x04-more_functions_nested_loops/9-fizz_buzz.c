#include <stdio.h>

/**
 * main - startpoint
 * this is a c program that print the numbers from 0 to 100 if its divisible
 * by 3 print fizz
 * and its divisable by 5 print buzz and if together print frezz buzz
 * Return:0 sucess*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if ((i % 5 == 0) && (i % 3 != 0))
			printf("Buzz ");
		else if ((i % 3 == 0) && (i % 5 != 0))
			printf("Fizz ");
		else
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return (0);
}
