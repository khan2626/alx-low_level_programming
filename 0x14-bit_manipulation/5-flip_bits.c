#include "main.h"
/**
 * flip_bits - returns number of bit to be flipped to get from one num to another
 * @n: first parameter
 * @m: second parameter
 * Return: number of bits to be fliped to get from one num to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  int i, size = 0;
  unsigned long int temp;
  unsigned long int xor = n ^ m;

  for ( i = 63; i >= 0; i--)
    {
      temp = xor >> 1;

      if (temp & 1)
	size++;
    }
  return (size);
}
