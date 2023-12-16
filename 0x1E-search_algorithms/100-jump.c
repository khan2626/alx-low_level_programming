#include "search_algos.h"
#include <math.h>

/**
* min - returns the smallest of the step or max array limit
* @step: the step
* @size: size of array
* Return: returns the smaller
*/

size_t min(size_t step, size_t size)
{
	if (step <= size)
		return (step);
	return (size);
}


/**
* jump_search - It searches by hopping
* @array: the array to be searched
* @size: the size of array
* @value: Target value to be searched
* Return: -1 is not found or the index of found
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev = 0;

	if (!array || size == 0)
		return (-1);
	step = sqrt(size);
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
		if (prev >= size)
			break;
	}
	prev -= step;
	printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);
	while (array[prev] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
		if (prev == size)
			return (-1);
	}
	return (-1);
}
