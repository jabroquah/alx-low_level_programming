#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (sucess)
*
*
*/

int main(void)
{
	int c, c2;

	for (c = 0; c <= 98; c++)
	{
		for (c2 = c + 1; c2 <= 99; c2++)
		{
			putchar('0' + c / 10);
			putchar('0' + c % 10);
			putchar(32);
			putchar('0' + c2 / 10);
			putchar('0' + c2 % 10);
			if (c / 10 != 9 || c % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
