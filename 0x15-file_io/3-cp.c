#include "main.h"
#define MAXSIZE 1024

/**
 * print_error_and_exit - prints error messages and exits with exit number
 *
 * @error: exit number or file descriptor
 * @filename: name of file
 * @fd: file descriptor
 *
 * Return: 0 on success
*/
void print_error_and_exit(int error, char *filename, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close file_d %d\n", fd);
			break;
		default:
			break;
	}
	exit(error);
}
/**
 * main - create a copyfile
 *
 * @argc: argument count
 * @argv: argument passed by
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	int read_stat, write_stat;
	char buffer[MAXSIZE];


	if (argc != 3)
		print_error_and_exit(97, NULL, 0);


	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, argv[1], 0);


	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error_and_exit(99, argv[2], 0);


	while ((read_stat = read(fd_from, buffer, MAXSIZE)) > 0)
	{
		write_stat = write(fd_to, buffer, read_stat);
		if (write_stat == -1 || write_stat != read_stat)
		{
			print_error_and_exit(99, argv[2], 0);
		}
	}

	if (read_stat == -1)
		print_error_and_exit(98, argv[1], 0);

	if (close(fd_from) == -1)
		print_error_and_exit(100, NULL, fd_from);

	if (close(fd_to) == -1)
		return (0);
	exit(0);
}
