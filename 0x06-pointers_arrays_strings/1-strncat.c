#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings
 *
 * @dest: string to return
 * @src: string to join
 * @n: number of bytes
 *
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destIndex = 0;
	int srcIndex = 0;

	while (*(dest + destIndex) != '\0')
	{
		destIndex++;
	}

	for (srcIndex = 0; srcIndex <= n - 1 && *(src + srcIndex) != '\0'; srcIndex++)
	{
		*(dest + destIndex + srcIndex) = *(src + srcIndex);
	}

	*(dest + destIndex +srcIndex) = '\0';

	return (dest);
}
