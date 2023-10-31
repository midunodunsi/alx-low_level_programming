#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file print to stdout.
 * @filename: text file being read
 * @letters: number of letteres to be read
 * Return: w- actual number of bytes read and printed
 *      0 when function falls or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}
