#include "main.h"
#include <fcntl.h>

/**
 * create_file -  a function that creates a file.
 * @filename: name of the file to create
 * @text_content: text to add to the new file
 *
 * Return: Always 1 on success, -1 on Failure
 */
int create_file(const char *filename, char *text_content)
{

	int writechars, len, fp;

	writechars = len = fp = 0;
	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fp < 0)
			return (-1);
	while (text_content && text_content[len])
		len++;

	writechars = write(fp, text_content, len);
	if (writechars < 0)
		return (-1);
	close(fp);
	return (1);
}
