#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
