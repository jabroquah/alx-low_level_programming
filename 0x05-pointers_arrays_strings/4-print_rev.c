#include "main.h"
#include <stdio.h>


/**
* _puts - prints a string followed by a new line_
*
* @a: pointer to string
*
*/

void _puts(char *a)
{
	int index = 0;

	while (*(a + index) != '\0')
	{
		_putchar(*(a + index));
		index++;
	}
	_putchar(10);
}
