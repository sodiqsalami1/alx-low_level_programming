#include "main.h"
/**
 * create_file - create and write into a file
 * and copy content in it
 * @filename: creation of filename
 * @text_content: content to be copied
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int rwr;
	int fd;
	int nletters;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(fd, text_content, nletters);

	if (rwr == -1)
		return (-1);
	close(fd);

	return (1);
}