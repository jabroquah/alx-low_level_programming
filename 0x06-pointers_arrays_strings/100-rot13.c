#include "main.h"
#include <string.h>

/**
 * rot13 - encodes a string using rot13 algorithm
 * @s: input string
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int stringIndex = 0, alphabetIndex = 0;
	int stringLength = strlen(s);
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char key[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (; stringIndex < stringLength; stringIndex++)
	{
		for (alphabetIndex = 0; alphabetIndex < 52; alphabetIndex++)
		{
			if (*(s + stringIndex) == alphabets[alphabetIndex])
			{
				*(s + stringIndex) = key[alphabetIndex];
				break;
			}
		}
	}
	return (s);
}
