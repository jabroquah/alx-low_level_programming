#include "main.h"

/**
* _puts_recursion - prints a string, followed by a new line
*
* @s: input string
*
*/


void _puts_recursion(char *s)
{
	int startIndex = 0;
	int *index = &startIndex;

	if (*(s + *(index)) != '\0')
	{
		putchar(*(s + 0));
		_puts_recursion(s + *index + 1);
	}
	putchar('\n');
}
