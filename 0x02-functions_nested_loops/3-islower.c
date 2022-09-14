#include <stdio.h>
#include <ctype.h>

/**
* _islower - checks for lowercase character
* @c: character to be checked
* Return: 1 if c is lowercase or 0
*
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
		return (0);
}
