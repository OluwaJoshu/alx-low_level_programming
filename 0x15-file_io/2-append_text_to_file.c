#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text to the end of a file.
 * @filename: name of the file to append to.
 * @text_content: content to append to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	/* Check for NULL filename */
	if (filename == NULL)
		return (-1);

	/* Open file in append mode */
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, append it to the file */
	if (text_content != NULL)
	{
		/* Count the number of letters in text_content */
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		/* Write text_content to the file */
		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	/* Close the file */
	close(fd);

	return (1);
}
