#include "main.h"

/**
 * print_sign - prints the sign of a numbers
 * @c: number to be checked
 *
 * Return: 0 if zero, 1 if > 0 and -1 if < 0
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
