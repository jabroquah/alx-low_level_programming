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
	int k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if ((i >= j) || (j >= k))
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if ((k == 57) && (j == 56))
				{
					if (i == 55)
						break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
