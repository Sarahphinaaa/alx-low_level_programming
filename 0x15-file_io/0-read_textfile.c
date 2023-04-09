#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. If the function fails, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int sf;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	sf = open(filename, O_RDONLY);

	if (sf == -1)
		return (0);

		buf = malloc(sizeof(char) * (letters));
		if (!buf)
			return (0);

		nrd = read(fd, buf, letters);
		nwr = write(STDOUT_FILENO, buf, nrd);

		close(sf);

		free(buf);

		return (nwr);
}
