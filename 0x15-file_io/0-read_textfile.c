#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed or 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);

	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(fd);

	free(buffer);

	return (wr);
}
