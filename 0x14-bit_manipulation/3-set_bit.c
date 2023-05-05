#include "main.h"

/**
 * set_bit - it sets the of bit at index to 1
 * @index: the position of the bit to be changed to 1
 * @n: the number to be changed
 * Return: 1 if successful and -1 if unsuccessful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
  if (index > 63)
    return (-1);

  *n = ((1UL << index) | *n);
  return (1);
}
