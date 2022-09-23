#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: encoded string
 */


char *leet(char *s)
{
	char key = {65, 52, 69, 51, 79, 48, 84, 55, 76, 49};
	int stIndex, keyIndex;

	for (strIndex = 0; s[strIndex] != '\0'; strIndex++)
	{
		for (keyIndex = 0; keyIndex < 10; keyIndex += 2)
		{
			if ((s[strIndex] == key[keyIndex] || s[strIndex] == (key[keyIndex] + 32)))
				s[strIndex] = key[keyIndex + 1];
		}
	}

	return (s);
}
