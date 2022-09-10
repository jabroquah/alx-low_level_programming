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

	int i;
	int j;

	for (i = 48, j = 49; i <= 57; i++)
	{
		for (; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				break;
			}
			putchar(44);
			putchar(32);
		}
		j = i +2;

	}

	putchar('\n');

	return (0);
}
