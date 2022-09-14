#include <stdio.h>

/**
* print_alphabet_x10 - prints 10 times the alphabet
*
*
*/

void print_alphabet_x10(void)
{
	int a,b;

	for (a = 1; a <=2; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			putchar(b);
			putchar('\n');
		}
	}
}
