#include <stdio.h>

/**
* print_last_digit - prints the last digit of a number
* @n: a number
* 
* Return: last digit 
*/

void print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	
	putchar(last_digit + '0');

	return last_digit;
}
