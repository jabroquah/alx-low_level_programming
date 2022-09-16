#include "main.h"

/**
 * more_numbers - Prints 0-14 follwed by a new line 10 times
 * Return: void
 */


void more_numbers(void)
{
	int j;
	int i = 0;

	while (i < 10)
	{
		char *s = "01234567891011121314";

		for (j = 0; j <= 19; j++)
		{
			_putchar(s[j]);
		}
		i++;
		_putchar('\n');
	}
}
