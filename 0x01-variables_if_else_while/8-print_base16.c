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

	for (i = 48; i <= 102; i++)
	{
		putchar(i);
		if (i == 57)
		{
			i = 97;
		}
	}

	putchar('\n');

	return (0);
}
