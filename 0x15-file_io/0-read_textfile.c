#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile -  a function that reads a text file and
 *		prints it to the POSIX standard output.
 * @filename: A pointer to a string containing the
 *		name of the text file to be read.
 * @letters: The number of letters the function should read
 *		and print from the file.
 * Return: The actual number of letters or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buffer;
	int num_letters_read, writechars;

	fp = num_letters_read = writechars = 0;
	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters) + 1);
	if (buffer == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp < 0)
	{
		free(buffer);
		return (0);
	}
	num_letters_read = read(fp, buffer, letters);
	if (num_letters_read < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	writechars = write(STDOUT_FILENO, buffer, num_letters_read);
	if (writechars <= 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fp);
	return (num_letters_read);
}
