#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads a text file and prints it to the POSIX standard output
 * @filename: name of text file being read
 * @letters: number of letters to be read ad printed
 *
 * Return: Actual number of letters that could be read and printed OR
 * 0 if function fails OR filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w);
}
