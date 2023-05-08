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
    int file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    ssize_t w = write(file_des, text_content, len);
    int len = 0;

    if (filename == NULL || file_des == -1)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[len] != '\0')
            len++;

        if (w == -1)
        {
            close(file_des);
            return (-1);
        }
    }

    close(file_des);
    return (1);
}