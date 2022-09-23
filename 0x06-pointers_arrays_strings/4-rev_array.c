#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: the number of elements in the array
 *
 */


void reverse_array(int *a, int n)
{
	int frontIndex, stopIndex, backIndex, temp;

	stopIndex = (n - 1) / 2;
	frontIndex = 0;
	backIndex = n - 1;
	temp = 0;

	for (frontIndex = 0; frontIndex <= stopIndex; frontIndex++, backIndex--)
	{
		if (n % 2 == 1 && (frontIndex == stopIndex))
			break;
		temp = *(a + frontIndex);
		*(a + frontIndex) = *(a + backIndex);
		*(a + backIndex) = temp;
	}
}
