#include "search_algos.h"

/**
 * linear_search - searches for a target using linear search
 * @array: array to search for target value
 * @value: Target value
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
  size_t i;

  if (size == '\0')
    return (-1);
  for (i = 0; i < size; i++)
    {
      printf("Value checked array [%li] = [%i]\n", i, array[i]);
      if (array[i] == value)
	{
	  return (i);
	}
    }
  return (-1);
}
