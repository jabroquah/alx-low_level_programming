#include "main.h"
#include <stdio.h>


/**
* print_rev - prints a string in reverse followed by a new line
*
* @a: pointer to string
*
*/

void print_rev(char *a)
{
	int index = 0;

	while (*(a + index) != '\0')
	{
		index++;
	}

	while (index > 0)
	{
		putchar(*(a + (index - 1)));
		index--;
	}
	_putchar('\n');
}
