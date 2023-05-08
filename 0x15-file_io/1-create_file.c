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
    int file_des, res, len;

    if (filename == NULL)
        return (-1);

    file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (file_des == -1)
        return (-1);

    if (text_content != NULL)
    {
        len = strlen(text_content);
        res = write(file_des, text_content, len);
        if (res == -1 || res != len)
        {
            close(file_des);
            return (-1);
        }
    }

    close(file_des);
    return (1);
}