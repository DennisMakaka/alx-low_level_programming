#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: The name of the file to append to.
 * @text_content: The content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor;
int content_length = 0;

if (!filename)
return (-1);

file_descriptor = open(filename, O_WRONLY | O_APPEND, 0600);

if (file_descriptor == -1)
return (-1);

if (!text_content)
text_content = "";

while (text_content[content_length])
content_length++;

if (write(file_descriptor, text_content, content_length) == -1)
{
close(file_descriptor);
return (-1);
}

close(file_descriptor);

return (1);
}
