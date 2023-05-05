#include "main.h"

/**
 * get_bit - returns index value of a bit
 * @n: the number input
 * @index: the position of the number to return
 * Return: index value
 */
int get_bit(unsigned long int n, unsigned int index)
{
  unsigned int i;

  if (index > 63)
    return (-1);

  for (i = 0; i < 64; n >>= 1, i++)
    {
      
      if (index == i)
	{
	  return (n & 1);
	}
    }
  return (n & 1);
}
