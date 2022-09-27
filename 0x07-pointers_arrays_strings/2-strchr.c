#include "main.h"
#include <stddef.h>

/**
 * _strchr - This finds the first occurence of a char in a string
 * @s: The string to be searched
 * @c: The character the be found
 *
 * Return: Pointer to the first occurence of the char or null
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\n'; index++)
	{
		if (s[index] == c)
			return (&s[index]);
	}
	return (NULL);
}
