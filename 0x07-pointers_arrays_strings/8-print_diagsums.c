#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  prints the sums of two diagonals of a square matrix
 * @a: a pointer to a matrix
 * @size: size of square matrix
 */

void print_diagsums(int *a, int size)
{
	int index, n = size - 1, sum1 = 0, sum2 = 0;
	int *row;

	for (index = 0; index <= n; index++)
	{
		row = (a + size * index);
		sum1 += *((row + index));
		sum2 += *(row + (n - index));
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
