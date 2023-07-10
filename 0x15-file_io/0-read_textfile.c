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
    FILE *file_p;
    char *buffer;
    ssize_t bytes_read, bytes_write;

    if (filename == NULL)
    {
        return (0);
    }

    file_p = fopen(filename, "r");
    if (file_p == NULL)
    {
        return (0);
    }

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
    {
        fclose(file_p);
        return (0);
    }

    bytes_read = fread(buffer, sizeof(char), letters, file_p);
    if (bytes_read == 0)
    {
        fclose(file_p);
        free(buffer);
        return (0);
    }

    bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_write != bytes_read)
    {
        fclose(file_p);
        free(buffer);
        return (0);
    }

    fclose(file_p);
    free(buffer);
    return bytes_write;
}
