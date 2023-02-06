#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of the file to create and
 * @text_content: Is a NULL terminated string to write to the file.
 *
 * Return: 1 (Success), -1 if function fails
 * Otherwise - 1 if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int k, j, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	k = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(k, text_content, l);
	if (k == -1 || j == -1)
		return (-1);
	close(k);
	return (1);
}
