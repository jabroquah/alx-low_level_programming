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
	
		for (start = 0; start <= mid; backIndex--, startIndex++)
		{
			temp = *(a + startIndex);
			*(s + start) = *(s + backIndex);
			*(s + backIndex) = temp; 
		}
	}


	putchar('\n');
}
