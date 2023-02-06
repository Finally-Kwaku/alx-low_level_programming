#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Is the name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 ( Success), -1 (Failure) or filename is NULL.
 * If file does not exist OR the user lacks write permissions -1.
 * Otherwise 1 if file exists
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int k, j, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	k = open(filename, O_WRONLY | O_APPEND);
	j = write(k, text_content, l);
	if (k == -1 || j == -1)
		return (-1);
	close(k);
	return (1);
}
