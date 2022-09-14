#include <stdio.h>

/**
* print_last_digit - prints the last digit of a number
* @n: a number
* 
* Return: last digit 
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n > 0)
	{	
		last_digit = n % 10;
		putchar(last_digit + '0');
		return last_digit;
	}
	else
	{
		last_digit = (-1 * n) % 10;
		putchar(last digit + '0');
		return last_digit;
	{


}
