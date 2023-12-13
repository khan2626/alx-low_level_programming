#include "search_algos.h"

/**
 * interpolation_search - Searches a target using
 * interpolation search
 * @array: Sorted array of integers
 * @size: size of the array
 * @value: Target value to search for
 * Return: index of target, else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
  size_t low = 0;
  size_t high = size - 1;
  size_t pos;

  if (array == NULL || size == '\0')
    {
      return (-1);
    }
  while ((array[low] != array[high]) &&
	 (value >= array[low]) && (value <= array[high]))
    {
      pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
      printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
      if (value < array[pos])
	high = pos - 1;
      else if (value >array[pos])
	low = pos + 1;
      else
	return (pos);
    }
  if (value == array[low])
    {
      printf("Value checked array[%lu] = [%d]\n", low, array[low]);
      return (low);
    }
  pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
