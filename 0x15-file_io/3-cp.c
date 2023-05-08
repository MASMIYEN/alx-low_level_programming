#include "main.h"
#define BUFFER_SIZE 1024



int main(int argc, char *argv[]) {
    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    int cp_from = open(argv[1], O_RDONLY);
    if (cp_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    int cp_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (cp_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;
    while ((bytes_read = read(cp_from, buffer, BUFFER_SIZE)) > 0) {
        ssize_t bytes_written = write(cp_to, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }
    }

    if (bytes_read == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    if (close(cp_from) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_from);
        exit(100);
    }

    if (close(cp_to) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_to);
        exit(100);
    }

    return (0);
}
