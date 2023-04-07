#include "main.h"
#include <stdio.h>

/**
 * create_file - creates a file and writes text content to it
 * @filename: name of the file to create
 * @text_content: content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	/* Check for NULL filename */
	if (filename == NULL)
		return (-1);

	/* Create file with write permissions */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	/* If text_content is NULL, set it to an empty string */
	if (text_content == NULL)
		text_content = "";

	/* Count the number of letters in text_content */
	for (nletters = 0; text_content[nletters]; nletters++)
		;

	/* Write text_content to the file */
	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);

	/* Close the file */
	close(fd);

	return (1);
}
