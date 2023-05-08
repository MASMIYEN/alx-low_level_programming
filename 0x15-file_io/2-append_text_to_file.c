#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: file's name
 * @text_content: text's content
 *
 * Return: 1 On success || -1 On fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t length = strlen(text_content);

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	FILE *file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}
	if (fwrite(text_content, sizeof(char), length, file) != length)
	{
		fclose(file);
		return (-1);
	}
	fclose(file);
	return (1);
}
