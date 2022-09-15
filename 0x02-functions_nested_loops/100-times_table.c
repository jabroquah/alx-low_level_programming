#include <stdio.h>
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
	int units, tens, hundreds;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (a = 0; b <= n; b++)
	{
		for (a = 0; a <= n; a++)
		{
			if (a * b >= 100)
			{
				hundreds = a * b / 100;
				units = a * b % 10;
				tens = a * b / 10;
				_putchar(hundreds + '0');
				_putchar(tens + '0');
				_putchar(units + '0');
				if (a != n)
				{
					_putchar(',');
					_putchar(9);
				}
			}
			else if (a * b >= 10 && a * b < 100)
			{
				units = a * b % 10;
				tens = a * b / 10;
				_putchar(tens + '0');
				_putchar(units + '0');
				if (a != n)
				{
					_putchar(',');
					_putchar(9);
				}
			}
			else
			{
				_putchar(a * b + '0');
				if (a != n)
				{
					_putchar(',');
					_putchar(9);
				}
			}
			a = 0;
			_putchar('\n');
		}
	}
}
