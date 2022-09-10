#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* Prints a random number and determines
* whether it's zero, positive or negative 
*
*/

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%g is positive\n", n);
	}
	else if(n < 0)
	{
		printf("%g is negative\n", n);
	}
	else
	{
		printf("%g is zero\n", n);
	}
	return (0);
}
