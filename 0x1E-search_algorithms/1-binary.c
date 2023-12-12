#include "search_algos.h"

/**
 * binary_search - Searches target using binary search algorithm
 * @array: Sorted array of integers to search for target
 * @size: Size of the array
 * @value: Target value to search for
 * Return: Index of target, or -1
 */

int binary_search(int *array, size_t size, int value)
{
  int l = 0;
  int h = size - 1;
  int m, i;

  if (size == '\0')
    {
      return (-1);
    }
  while (l <= h)
    {
      m = (l + h) / 2;

      printf("Searching in array: ");
      for (i = l; i <= h; i++)
	printf("%i%s", array[i], i == h ? "\n" : ", ");
      if (array[m] < value)
	l = m + 1;
      else if (array[m] > value)
	h = m - 1;
      else
	return (m);
    }
  return (-1);
}
