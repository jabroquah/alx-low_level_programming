#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints times table up to argument n
 * @n: integer argument
 * Return: void
 */


void print_times_table(int n)
{
	int a = b = 0;
	int units, tens;

	if (a == 0 || a > 15)
	{
		return;
	}

	for (b = 0; c <= n; c++)
	{
		for (b = 0; b <= n; b++)
		{
			if (b * c >= 10)
			{
				units = b * c % 10;
				tens = b * c / 10;
				_putchar(tens + '0');
				_putchar(units + '0');
				if (b != a )
				{
					_putchar(',');
				}
			}
			else 
			{
				_putchar(b * c + '0');
				if (b != a)
				{
					_putchar(',');
				}
			}
		}
		b = 0;
		_putchar('\n');
	}
}	
