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
	int startIndex = 0;

	for (; startIndex < n && *(src + startIndex) != '\0'; startIndex++)
	{
		*(dest + startIndex) = *(src + startIndex);
	}

	*(dest + startIndex) = '\0';

	return (dest);
}
