#include "main.h"
#include "2-strlen.c"


/**
* print_rev - prints a string in reverse followed by a new line
*
* @a: pointer to string
*
*/

void print_rev(char *a)
{

	int index = _strlen(a) - 1;

	while (index >= 0)
	{
		putchar(*(a + index));
		index--;
	}
	putchar('\n');

}
