#include "main.h"

/**
 * create_file - create a file
 *
 * @filename: the name of the file
 * @text_content: the content of the file
 *
 * Return: 1 on success || -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
    if (filename == NULL)
        return (-1);

    int file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (file_des == -1)
        return (-1);

    if (text_content != NULL) {
        int len = 0;
        while (text_content[len] != '\0')
            len++;
        ssize_t w = write(file_des, text_content, len);
        if (w == -1) {
            close(file_des);
            return (-1);
        }
    }

    close(file_des);
    return (1);
}