#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buff(char *file);
void close_f(int fp);

/**
 * create_buff - assign 1024 bytes to a buffer
 * @file: a file name 
 * Return: newly allocated buffer
 */
char *create_buff(char *file)
{
  char *buff;

  buff = malloc(sizeof(char) * 1024);

  if (buff == NULL)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
      exit(99);
    }
  return (buff);
}

/**
 * close_f - it closes file descriptor fd
 * @fp: file descriptor about to be closed
 */
void close_f(int fp)
{
  int q;

  q = close(fp);

  if (q == -1)
    {
      dprintf(STDERR_FILENO, "Can't close fp %d\n", fp);
      exit(100);
    }
}

/**
 * main - copies content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
  char *buff;
  int file_from, file_to, r, w;

  if (argc != 3)
    {
      dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
      exit(97);
    }
  buff = create_buff(argv[2]);
  file_from = open(argv[1], O_RDONLY);
  r = read(file_from, buff, 1024);
  file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

  do {
      if (file_from == -1 || r == -1)
	{
	  dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", argv[1]);
	  free(buff);
	  exit(98);
	}

      w = write(file_to, buff, r);
      if (file_to == -1 || w == -1)
	{
	  dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	  free(buff);
	  exit(99);
	}
      r = read(file_from, buff, 1024);
      file_to = open(argv[2], O_WRONLY | O_APPEND);
    }
  while (r > 0);

  free(buff);
  close(file_from);
  close(file_to);

  return (0);
}
