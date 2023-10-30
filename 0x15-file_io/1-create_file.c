#include "main.h"

/**
 * create_file - Creates a new file and writes content to it.
 *
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int file_descriptor; /* File descriptor for the new file */
int content_length;  /* Length of the text content */

if (!filename)
return (-1);

file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (file_descriptor == -1)
return (-1);

if (!text_content)
{
text_content = "";
}

for (content_length = 0; text_content[content_length]; content_length++)
{
/* Loop to find the length of the text_content */
}

if (write(file_descriptor, text_content, content_length) == -1)
{
close(file_descriptor);
return (-1);
}

close(file_descriptor);

return (1);
}
