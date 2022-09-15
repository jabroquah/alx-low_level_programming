#include "main.h"

/**
 * print_times_table - Prints times table up to argument n
 * @n: integer argument
 * Return: void
 */


void print_times_table(int n)
{
	int a = 0;
	int b = 0;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; b <= n; b++)
		{
			for (a = 0; a <= n; a++)
			{		
				if (a * b >= 100)
				{
					_putchar(a * b / 100 + '0');
					_putchar(a * b / 10 + '0');
					_putchar(a * b % 10 + '0');
					if (a != n)
					{
						_putchar(' ');
					}
				}
				if (a * b >= 10 && a * b < 100)
				{
					_putchar(a * b / 10 + '0');
					_putchar(a * b % 10 + '0');
					if (a != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				if (a * b < 10)
				{
					_putchar(a * b + '0');
					if (a != n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			a = 0;
			_putchar('\n');
		}
	}
}	
