#include <stdio.h>
#include "main.h"

/**
 * main - prints 1 to 100 follwed by a new line.
 * But for multiples of three print Fizz and for
 * multiples of five print Buzz
 * For numbers which are multiples of both 3 and 5 print
 * FizzBuzz
 *
 * Return: void
 */

void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
