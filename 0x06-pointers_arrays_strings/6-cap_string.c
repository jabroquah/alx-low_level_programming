#include "main.h"

/**
 * cap_string - Capitalizes every first letter
 * @s: input string
 *
 * Return: string with every first letter capitalized
 */
char *cap_string(char *s)
{
	int wordSeparators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int stringIndex = 0, separatorIndex;

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;

	while (*(s + stringIndex) != '\0')
	{
		for (separatorIndex = 0; separatorIndex < 13; separatorIndex++)
		{
			if (*(s + stringIndex) == wordSeparator[separatorIndex])
			{
				if ((*(s + (stringIndex + 1)) >= 97) && (*(s + (stringIndex + 1)) <= 122))
					*(s + (stringIndex + 1)) = *(s + (stringIndex + 1)) - 32;
				break;
			}
		}
		stringIndex += 1;
	}

	return (s);
}
