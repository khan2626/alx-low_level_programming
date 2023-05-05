#include "main.h"

/**
 * get_endianness - checks the size of a machine 
 * Return: if it big, return 0, else return 1
 */
int get_endianness(void)
{
  char *c;
  unsigned int i = 1;

  c = (char *) & i;

  return (*c);
}
