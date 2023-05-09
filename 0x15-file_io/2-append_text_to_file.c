#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to be appended
 * @text_content: the content of file to append to filename
 * Return: 1 if successful, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
  int wr, op, str_len = 0;

  if (filename == NULL)
    return (-1);

  if (text_content != NULL)
    {
      for(str_len = 0; text_content[str_len] != '\0';)
	str_len++;
    }
  op = open(filename, O_WRONLY | O_APPEND);
  wr = write(op, text_content, str_len);

  if (op == -1 || wr == -1)
    return (-1);

  close(op);

  return (1);
}
