#include "main.h"
#include <stdio.h>


/**
* _strlen - returns the length of a string
*
* @a: pointer to string
*
* Return: length of string parameter
*/

int _strlen(char *a)
{
	int index = 0;
	while (*(a + index) != '\0')
	{
		index++;
	}
	return index;
}
