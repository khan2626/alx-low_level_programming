#include "search_algos.h"

/**
* binary_search_helper - searches a target value in an array
* @array: An array of integers to search 
* @left: the left boundary of the array
* @right: the right  boundary of the array
* @value: the target we are searching
* Return: -1 if not found or the index of found
*/

int binary_search_helper(int *array, size_t left, size_t right, int value)
{
	unsigned int i = left;
	size_t mid = (right - left) / 2 + left;

	printf("Searching in array:");
	while (i <= right)
	{
		printf(" %d", array[i]);
		if (i < right)
			printf(",");
		i++;
	}
	printf("\n");

	/* if 1 element and does not match... */
	if (left == right)
		return (-1);
	if (left == right - 1)
	{
		if (array[left] == value)
			return (left);
		if (array[right] == value)
			return (right);
	}
	/* check if middle is target value, if so go left*/
	/* if target value is on the left, search left */
	if (array[mid] >= value)
		return (binary_search_helper(array, left, mid, value));
	/* the target value MUST BE on the right */
	return (binary_search_helper(array, mid + 1, right, value));
}

/**
* advanced_binary - Searches a target value in an array
* @array: An array of intaegers to search
* @size: Size of the array
* @value: Target value to search for
* Return: -1 if not found or the index of found
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (binary_search_helper(array, 0, size - 1, value));
}
