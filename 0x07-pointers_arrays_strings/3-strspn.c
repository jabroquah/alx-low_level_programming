#include "main.h"

/**
 * _strspn - Counts the number of bytes of a string contained in another string
 * @s: String to be searched
 * @accept: String to be searched for
 *
 * Return: The number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, supposed_count = 0;
	int index1, index2;

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (s[index1] == accept[index2])
				count++;
		}
		supposed_count++;
		if (count == 0 || count != supposed_count)
			break;
	}
	return (count);
}
