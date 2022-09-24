#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer input
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int number, count;

	if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}

	number = n;
	count = 1;

	while (number >= 10)
	{
		number /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((n / count) % 10) + 48);
	}
}
