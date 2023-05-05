#include "main.h"
#include <stddef.h>

/**
* binary_to_uint - converts a binary to an unsigned int
* @b: a pointer to a string of 0 and 1 characgters
* Return: 0 if b is NULL and if b is not 0 or 1, else 
* return the converted number
*/
unsigned int binary_to_uint(const char *b)
{
  int i;
  unsigned int result = 0;

  if (b == NULL)
    return (0);

  for (i = 0; b[i] != '\0'; i++)
    {
      if (b[i] < '0' || b[i] > '1')
	return (0);
      result = 2 * result + (b[i] - '0');
    }

  return (result);
}
