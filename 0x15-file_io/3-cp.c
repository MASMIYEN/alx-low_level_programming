#include "main.h"

/**
 * error -
 *
 * @log_msg: log message displayed
 * @arg: argument passed to program
 * @code: message code
 *
 * Return: code
 */
void error(char *log_msg, char *arg, int code)
{
	dprintf(STDERR_FILENO, log_msg, arg);
	exit(code);
}
/**
 * main - copies the content of a file to another file
 *
 * @argc: arg count
 * @argv:string's array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error("Usage: %s file_from file_to\n", argv[0], 97);
	}

	int cp_from = open(argv[1], O_RDONLY),
		cp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (cp_from == -1)
	{
		error("Error: Can't read from file %s\n", argv[1], 98);
	}
	if (cp_to == -1)
	{
		error("Error: Can't write to %s\n", argv[2], 99);
	}

	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	bytes_written = write(cp_to, buffer, bytes_read);

	while ((bytes_read = read(cp_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (bytes_written != bytes_read)
		{
			error("Error: Write to %s failed\n", argv[2], 99);
		}
	}
	if (bytes_read == -1)
	{
		error("Error: Can't read from file %s\n", argv[1], 98);
	}
	if (close(cp_from) == -1)
	{
		error("Error: Can't close fd %d\n", cp_from, 100);
	}
	if (close(cp_to) == -1)
	{
		error("Error: Can't close fd %d\n", cp_to, 100);
	}
	return (0);
}
