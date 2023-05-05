#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character
 * @c: the character to write
 * Return: 1 on success and -1 if unsuccessful
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
