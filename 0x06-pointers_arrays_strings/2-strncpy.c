#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: paste copied string here
 * @src: string to be copied
 * @n: number of bytes to be copied
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	for (; index < n && *(src + index) != '\0'; index++)
	{
		*(dest + index) = *(src + index);
	}

	for (; index < n; index++)
		*(dest + index) = '\0';

	return (dest);
}
