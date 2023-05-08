#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file called filename
 * @filename: the file to be created
 * @text_content: a pointer to strings of character
 * Return: 1 if successful, else -1
 */
int create_file(const char *filename, char *text_content)
{
  int fp, w, str_len = 0;

  if (filename == NULL)
    return (-1);

  if (text_content != NULL)
    {
      for (str_len = 0; text_content[str_len] != '\0';)
	str_len++;
    }

  fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
  w = write(fp, text_content, str_len);

  if (fp == -1 || w == -1)
    return (-1);

  close(fp);

  return (1);
}
