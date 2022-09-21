#include "main.h"
#include "2-strlen.c"


/**
* rev_string - reverses a string
*
* @a: pointer to string
*
*/

void rev_string(char *a)
{

	int backIndex, startIndex, length, mid, temp;

	length = _strlen(a);
	startIndex = 0;
	backIndex = length - 1;

	if (length != 0)
	{
		mid = length % 2 == 1 ? (length-1) / 2 : length / 2;
	
		for (startIndex = 0; startIndex <= mid; backIndex--, startIndex++)
		{
			temp = *(a + startIndex);
			*(a + startIndex) = *(a + backIndex);
			*(a + backIndex) = temp; 
		}
		putchar('\n');
	}
}
