#include <stdio.h>

/**
 * main - prints all its args
 * @argc: argument count
 * @argv: argument Vector
 *
 * Return: 0
 */

int main(int argc,  char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
