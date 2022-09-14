#include <stdio.h>
#include <ctype.h>

/**
* _isalpha - checks if argument is alpha character
* @c: character to be checked
* Return: 1 if c is a letter, lowercase
* or uppercase otherwise return 0
*
*
*
*/


int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
		return (0);
}
