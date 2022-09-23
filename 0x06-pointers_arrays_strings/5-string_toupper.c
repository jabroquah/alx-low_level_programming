#include "main.h"

/**
 * string_toupper - changes all lowercase
 * letters to uppercase
 *
 * @n: string to change
 *
 * Return: all-caps string
 */

char *string_toupper(char *n)
{
	int a = 0;

	for (; a < *(n + a) != '\0'; a++)
	{
		if (*(n + a) >= 97 && *(n + a) <= 122)
			*(n + a) = *(n + a) - 32;
	}

	return (n);
}
