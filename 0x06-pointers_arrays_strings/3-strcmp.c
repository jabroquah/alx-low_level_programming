#include "main.h"

/**
 * _strcmp - This compares two strings
 * @s1: string1
 * @s2: string2
 *
 * Return: 0 if equal, +ve if string1 > string2
 * -ve if string1 < string2
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0, difference = 0; 


	while (difference == 0)
	{
		difference = *(s1 + index) - *(s2 + index);
		index++;
	}

	return (difference);
}
