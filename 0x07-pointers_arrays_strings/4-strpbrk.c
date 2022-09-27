#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: string to be searched for
 *
 * Return: The pointer to the first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int index1, index2;

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (s[index1] == accept[index2])
				return (&s[index1]);
		}
	}
	return (NULL);
}
