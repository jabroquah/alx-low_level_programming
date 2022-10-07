#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed to it
 * @argc: number of command line arguments
 * @argv: argument vector
 *
 */

void main(int argc,  char *argv[])
{
	int n = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return;
	}
	while (*argv)
	{
		argv++;
		n++;
	}
	printf("%d\n", n - 1);
}
