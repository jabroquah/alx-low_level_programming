#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters.
 * @n: number of arguments.
 *
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
