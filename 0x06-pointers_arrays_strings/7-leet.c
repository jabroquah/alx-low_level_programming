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
	int stringIndex, keyIndex;

	for (stringIndex = 0; s[stringIndex] != '\0'; stringIndex++)
	{
		for (keyIndex = 0; keyIndex < 10; keyIndex += 2)
		{
			if ((s[stringIndex] == key[keyIndex] || s[stringIndex] == (key[keyIndex] + 32)))
				s[stingIndex] = key[keyIndex + 1];
		}
	}

	return (s);
}
