#include "main.h"

/**
 * _isdigit - Checks for a digit characters
 * @c: character argument
 *
 * Return: 0 if not digit, 1 if digit
 */


int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
