#include "main.h"

/**
 * print_binary - prints binary operation of number
 * @n: the number to be printed in binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
  int i, num = 0;
  unsigned long int temp;
  
  for (i = 63; i >= 0; i--)
    {
      temp = n >> i;

      if (temp & 1)
	{
	  _putchar('1');
	  num++;
	}
      else if (num != 0)
	_putchar('0');
    }
  if (num == 0)
    _putchar('0');
}
