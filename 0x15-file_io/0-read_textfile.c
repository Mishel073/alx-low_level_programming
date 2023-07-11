#include "main.h"

/**
 * read_textfile  - reads a text file and prints
 * @filename:  pointing to a string of 0 and 1 chars
 * @letters : the number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count = 0, read_file;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	read_file = read(fd, buffer, letters);
	if (read_file == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	while (count < read_file)
	{
		if (write(STDOUT_FILENO, &buffer[count], 1) == -1)
		{
			close(fd);
			free(buffer);
			return (0);
		}
		count++;
	}
	close(fd);
	free(buffer);
	return (read_file);

}
