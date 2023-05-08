#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 *
 * @filename: file name
 * @letters: letters to print
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *fl = fopen(filename, "r");

	if (fl == NULL)
	{
		return (0);
	}

	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		fclose(fl);
		return (0);
	}

	ssize_t bytes_read = fread(buffer, sizeof(char), letters, fl);

	if (bytes_read == 0)
	{
		fclose(fl);
		free(buffer);
		return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written != bytes_read)
	{
		fclose(fl);
		free(buffer);
		return (0);
	}
	fclose(fl);
	free(buffer);
	return (bytes_written);
}
