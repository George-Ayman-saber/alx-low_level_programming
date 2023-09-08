#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - startpoint
 * Description :This program will assign a random number
 * to the variable n each time it is executed
 * Return : 0 (success)
*/

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n%10;
	if (x > 5){
		printf("Last digit of %d is %d  and is greater than 5\n",n,x);
	}
	else if (x < 5){
		printf("Last digit of %d is %d less than 6 and not 0\n",n,x);
	}
	else
	{
		printf("Last digit of %d is %d and is 0",n,x);
	}
	return (0);
}
