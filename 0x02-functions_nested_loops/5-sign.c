#include <stdio.h>

/**
* print_sign - prints the sign of a number
* @c: character to be checked
* Return: 1 if c is > 0, 
* 0 if c == 0 and 
* -1 if c < 0
*
*/


int _print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');	
		return (-1);
	}
	else
		return(0);
}
