#include <stdio.h>

/**
* print_alphabet: prints the alphabet in lowercase
*
*
*/

void print_alphabet(void)
{
	int n;

	for(n = 97; n <= 122; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
