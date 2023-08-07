#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - A function that appends text at the
 *			end of a file.
 * @filename: name of file to write into
 * @text_content: text to append to file
 *
 * Return: 1 (SUCCESS), else -1 (FAILURE)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, writechars, len;

	fp = writechars = len = 0;
	if (!filename)
		return (-1);
	else if (!text_content || !text_content[0])
		return (1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp < 0)
		return (-1);
	while (text_content[len])
		len++;
	writechars = write(fp, text_content, len);
	if (writechars < 0)
		return (-1);
	close(fp);
	return (1);
}
