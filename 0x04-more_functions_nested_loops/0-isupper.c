#include "main.h"

/**
 * _isupper - Check for uppercase characters
 * @c: character argument
 *
 * Return: 0 if not uppercase, 1 if uppercase
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
